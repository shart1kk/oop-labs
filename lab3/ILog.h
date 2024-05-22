#ifndef ILOG_H
#define ILOG_H

#include <string>

class ILog {
public:
    virtual void logEntry(const std::string& message) = 0;
    virtual ~ILog() = default;
};

#endif