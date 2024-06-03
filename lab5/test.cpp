#include "test.h"

Test::Test(TestGenerationStrategy* s) : strategy(s) {}

void Test::generate() {
    strategy->generateTest();
}

bool Test::checkAnswer(char choice) {
    return choice == 'b';
}
