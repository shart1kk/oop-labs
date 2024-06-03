#ifndef TEST_H
#define TEST_H

#include "test_generation_strategy.h"

class Test {
private:
    TestGenerationStrategy* strategy;

public:
    explicit Test(TestGenerationStrategy* s);
    void generate();
    bool checkAnswer(char choice);
};

#endif
