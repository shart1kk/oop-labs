#ifndef PASSSYSTEM_H
#define PASSSYSTEM_H

#include "Pass.h"
#include "Visitor.h"
#include <unordered_map>
#include <iostream>

using namespace std;

class PassSystem {
private:
    unordered_map<string, Pass> passes;

public:
    void issuePass(const Visitor& visitor, const string& passType, const string& room) {
        passes.emplace(visitor.getName(), Pass(passType, room));
        cout << "Пропуск виданий для: " << visitor.getName() << endl;
    }

    void revokePass(const Visitor& visitor) {
        auto it = passes.find(visitor.getName());
        if (it != passes.end()) {
            passes.erase(it);
            cout << "Пропуск відкликано для: " << visitor.getName() << endl;
        } else {
            cout << "Пропуск не знайдено для: " << visitor.getName() << endl;
        }
    }

    void displayPasses() const {
        cout << "Статистика пропусків:" << endl;
        for (const auto& entry : passes) {
            cout << "Відвідувач: " << entry.first << ", Тип пропуску: " << entry.second.getPassType() << ", Кімната: " << entry.second.getRoom() << endl;
        }
    }
};

#endif