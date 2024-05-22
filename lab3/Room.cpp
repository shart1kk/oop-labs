#include "IRoom.h"
#include "ILog.h"
#include <iostream>

class Room : public IRoom {
public:
    Room(ILog& log) : log(log) {}

    void grantAccess() override {
        log.logEntry("Access granted to room");
        std::cout << "Access granted to room" << std::endl;
    }

    void revokeAccess() override {
        log.logEntry("Access revoked from room");
        std::cout << "Access revoked from room" << std::endl;
    }

private:
    ILog& log;
};