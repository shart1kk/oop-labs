#ifndef TEST_GENERATION_STRATEGY_H
#define TEST_GENERATION_STRATEGY_H

class TestGenerationStrategy {
public:
    virtual void generateTest() = 0;
};

class SimpleTestGenerationStrategy : public TestGenerationStrategy {
public:
    void generateTest() override;
};

#endif
