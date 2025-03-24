#include <iostream>
#include <string>
#include "Factory.h"

using namespace std;

void createArmy(ArmyFactory& army) {
    Weapon* wep1 = army.createWeapon1();
    Weapon* wep2 = army.createWeapon2();
    Weapon* wep3 = army.createWeapon3();

    Warrior* war1 = army.createWarrior1(wep1);
    Warrior* war2 = army.createWarrior2(wep2);
    Warrior* war3 = army.createWarrior3(wep3);

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
