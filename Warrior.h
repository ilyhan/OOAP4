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
	StrongElf() {
		name = "Strong elf";
		weapon = new ElfSword();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class SmartElf : public Warrior {
public:
	SmartElf() {
		name = "Smart elf";
		weapon = new ElfBow();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class KindElf : public Warrior {
public:
	KindElf() {
		name = "Kind elf";
		weapon = new ElfDagger();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};


//humans
class StrongHuman : public Warrior {
public:
	StrongHuman() {
		name = "Strong human";
		weapon = new HumanSword();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class SmartHuman : public Warrior {
public:
	SmartHuman() {
		name = "Smart human";
		weapon = new HumanBow();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};

class KindHuman : public Warrior {
public:
	KindHuman() {
		name = "Kind human";
		weapon = new HumanDagger();
	}

	void makeSound() override {
		cout << "Создан воин: " << name << " имеющий оружие: " << weapon->getType() << endl;
	}
};
