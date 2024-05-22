#ifndef ITURNSTILE_H
#define ITURNSTILE_H

class ITurnstile {
public:
    virtual void enter() = 0;
    virtual void exit() = 0;
    virtual ~ITurnstile() = default;
};

#endif 
