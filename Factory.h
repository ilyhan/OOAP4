#pragma once
#include "Weapon.h"
#include "Warrior.h"

class ArmyFactory {
public:
    virtual Warrior* createWarrior1(Weapon* wep) = 0;
    virtual Warrior* createWarrior2(Weapon* wep) = 0;
    virtual Warrior* createWarrior3(Weapon* wep) = 0;

    virtual Weapon* createWeapon1() = 0;
    virtual Weapon* createWeapon2() = 0;
    virtual Weapon* createWeapon3() = 0;
};

class ElfFactory : public ArmyFactory {
public:
    Warrior* createWarrior1(Weapon* wep) override {
        Warrior* war = new StrongElf(wep);
        return war;
    }
    Warrior* createWarrior2(Weapon* wep) override {
        Warrior* war = new SmartElf(wep);
        return war;
    }
    Warrior* createWarrior3(Weapon* wep) override {
        Warrior* war = new KindElf(wep);
        return war;
    }

    Weapon* createWeapon1() override {
        Weapon* wep = new ElfSword();
        return wep;
    }

    Weapon* createWeapon2() override {
        Weapon* wep = new ElfBow();
        return wep;
    }

    Weapon* createWeapon3() override {
        Weapon* wep = new ElfDagger();
        return wep;
    }
};

class HumanFactory : public ArmyFactory {
public:
    Warrior* createWarrior1(Weapon* wep) override {
        Warrior* war = new StrongHuman(wep);
        return war;
    }
    Warrior* createWarrior2(Weapon* wep) override {
        Warrior* war = new SmartHuman(wep);
        return war;
    }
    Warrior* createWarrior3(Weapon* wep) override {
        Warrior* war = new KindHuman(wep);
        return war;
    }

    Weapon* createWeapon1() override {
        Weapon* wep = new HumanSword();
        return wep;
    }

    Weapon* createWeapon2() override {
        Weapon* wep = new HumanBow();
        return wep;
    }

    Weapon* createWeapon3() override {
        Weapon* wep = new HumanDagger();
        return wep;
    }
};