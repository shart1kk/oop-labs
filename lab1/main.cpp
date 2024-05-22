#include "TemporaryPass.h"
#include "AccessControlSystem.h"

int main() {
    AccessControlSystem system;

    system.addPass(new TemporaryPass("Марина Поліщук", 30, "Тимчасовий пропуск"));
    system.addPass(new TemporaryPass("Степан Ільків", 25, "Постійний пропуск"));

    system.printAllPassesInfo();
    system.checkAllPassesValidity();

    return 0;
}