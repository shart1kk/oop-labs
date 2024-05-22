#include "ILog.h"
#include <iostream>

class Log : public ILog {
public:
    void logEntry(const std::string& message) override {
        std::cout << "Log: " << message << std::endl;
    }
}