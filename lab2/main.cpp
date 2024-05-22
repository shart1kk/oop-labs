#include "PassSystem.h"
#include "Visitor.h"

int main() {
    PassSystem accessSystem;

    Visitor v1("Марина Поліщук", 30);
    Visitor v2("Степан Ільків", 25);

    accessSystem.issuePass(v1, "Тимчасовий", "Кімната 101");
    accessSystem.issuePass(v2, "Постійний", "Кімната 201");

    accessSystem.displayPasses();

    accessSystem.revokePass(v1);

    accessSystem.displayPasses();

    return 0;
}