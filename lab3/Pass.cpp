#include "IPass.h"
#include "ILog.h"
#include <iostream>

class Pass : public IPass {
public:
    Pass(ILog& log) : log(log), valid(false) {}

    bool isValid() const override {
        return valid;
    }

    void issuePass() override {
        valid = true;
        log.logEntry("Pass issued");
        std::cout << "Pass issued" << std::endl;
    }

    void revokePass() override {
        valid = false;
        log.logEntry("Pass revoked");
        std::cout << "Pass revoked" << std::endl;
    }

private:
    ILog& log;
    bool valid;
};
