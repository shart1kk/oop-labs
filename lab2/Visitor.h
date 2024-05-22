#ifndef VISITOR_H
#define VISITOR_H

#include <string>

using namespace std;

class Visitor {
private:
    string name;
    int age;

public:
    Visitor(const string& n, int a) : name(n), age(a) {}

    const string& getName() const {
        return name;
    }
};

#endif