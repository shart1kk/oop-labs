#ifndef DEPENDENCY_CONTAINER_H
#define DEPENDENCY_CONTAINER_H

#include "test_generation_strategy.h"
#include "test.h"

class DependencyContainer {
public:
    static TestGenerationStrategy* createGenerationStrategy();
    static Test* createTest();
};

#endif 
