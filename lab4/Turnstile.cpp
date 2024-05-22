#include "ITurnstile.h"
#include "ILog.h"
#include <iostream>

class Turnstile : public ITurnstile {
public:
    Turnstile(ILog& log) : log(log) {}

    void enter() override {
        log.logEntry("Entry through turnstile");
        std::cout << "Entered through turnstile" << std::endl;
    }

    void exit() override {
        log.logEntry("Exit through turnstile");
        std::cout << "Exited through turnstile" << std::endl;
    }

private:
    ILog& log;
};