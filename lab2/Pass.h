#ifndef PASS_H
#define PASS_H

#include <string>

using namespace std;

class Pass {
private:
    string passType;
    string room;

public:
    Pass(const string& type, const string& room) : passType(type), room(room) {}

    const string& getPassType() const {
        return passType;
    }

    const string& getRoom() const {
        return room;
    }
};

#endif