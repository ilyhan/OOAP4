#pragma once
#include <string>

using namespace std;

class Weapon {
public:
	string type;
	virtual string getType() = 0;
};

//Elfs
class ElfSword : public Weapon {
public:
	ElfSword() {
		type = "Elf sword";
	}

	string getType() override {
		return type;
	}
};

class ElfBow : public Weapon {
public:
	ElfBow() {
		type = "Elf bow";
	}

	string getType() override {
		return type;
	}
};

class ElfDagger : public Weapon {
public:
	ElfDagger() {
		type = "Elf dagger";
	}

	string getType() override {
		return type;
	}
};


//Humans
class HumanSword : public Weapon {
public:
	HumanSword() {
		type = "Human sword";
	}

	string getType() override {
		return type;
	}
};

class HumanBow : public Weapon {
public:
	HumanBow() {
		type = "Human bow";
	}

	string getType() override {
		return type;
	}
};

class HumanDagger : public Weapon {
public:
	HumanDagger() {
		type = "Human dagger";
	}

	string getType() override {
		return type;
	}
};

