#include <iostream>
#include <string>
#include "Factory.h"

using namespace std;

void createArmy(ArmyFactory& army) {
    Warrior* war1 = army.createWarrior1();
    Warrior* war2 = army.createWarrior2();
    Warrior* war3 = army.createWarrior3();

    war1->makeSound();
    war2->makeSound();
    war3->makeSound();
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Армия эльфов" << endl;
    ElfFactory elfFactory;
    createArmy(elfFactory);

    cout << "Армию людей" << endl;
    HumanFactory humanFactory;
    createArmy(humanFactory);
}
