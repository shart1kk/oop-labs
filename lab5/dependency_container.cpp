#include "dependency_container.h"

TestGenerationStrategy* DependencyContainer::createGenerationStrategy() {
    return new SimpleTestGenerationStrategy();
}

Test* DependencyContainer::createTest() {
    return new Test(createGenerationStrategy());
}
