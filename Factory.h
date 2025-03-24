#pragma once
#include "Weapon.h"
#include "Warrior.h"

class ArmyFactory {
public:
    virtual Warrior* createWarrior1() = 0;
    virtual Warrior* createWarrior2() = 0;
    virtual Warrior* createWarrior3() = 0;
};

class ElfFactory : public ArmyFactory {
public:
    Warrior* createWarrior1() override {
        Warrior* war = new StrongElf();
        return war;
    }
    Warrior* createWarrior2() override {
        Warrior* war = new SmartElf();
        return war;
    }
    Warrior* createWarrior3() override {
        Warrior* war = new KindElf();
        return war;
    }
};

class HumanFactory : public ArmyFactory {
public:
    Warrior* createWarrior1() override {
        Warrior* war = new StrongHuman();
        return war;
    }
    Warrior* createWarrior2() override {
        Warrior* war = new SmartHuman();
        return war;
    }
    Warrior* createWarrior3() override {
        Warrior* war = new KindHuman();
        return war;
    }
};