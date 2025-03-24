#pragma once
#include "Weapon.h"
#include "iostream"

using namespace std;

class Warrior {
public: 
	Weapon* weapon;
	string name;
	virtual void makeSound() = 0;
};

//elfs
class StrongElf : public Warrior {
public:
	StrongElf(Weapon* wep) {
		name = "Strong elf";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class SmartElf : public Warrior {
public:
	SmartElf(Weapon* wep) {
		name = "Smart elf";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class KindElf : public Warrior {
public:
	KindElf(Weapon* wep) {
		name = "Kind elf";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};


//humans
class StrongHuman : public Warrior {
public:
	StrongHuman(Weapon* wep) {
		name = "Strong human";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class SmartHuman : public Warrior {
public:
	SmartHuman(Weapon* wep) {
		name = "Smart human";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class KindHuman : public Warrior {
public:
	KindHuman(Weapon* wep) {
		name = "Kind human";
		weapon = wep;
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};
