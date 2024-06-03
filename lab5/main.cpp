#include "test.h"
#include "dependency_container.h"

int main() {
    Test* test = DependencyContainer::createTest();

    test->generate();

    char choice;
    std::cout << "Введіть ваш вибір (a, b, c, d): ";
    std::cin >> choice;

    if (test->checkAnswer(choice)) {
        std::cout << "Правильно!\n";
    } else {
        std::cout << "Неправильно.\n";
    }

    delete test; 
    return 0;
}
