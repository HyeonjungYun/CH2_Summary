#ifndef _COW_H_
#define _COW_H_

#include "PreProcess.h"
#include "Animal.h"

class Cow : public Animal {
private:
	string animalName;
	string cryingSound;
public:
	Cow();
	string getAnimalName() override;
	void makeSound();
};

Cow::Cow() {
	this->animalName = "Cow";
	this->cryingSound = "Moo";
}

string Cow::getAnimalName() {
	return this->animalName;
}

void Cow::makeSound() {
	cout << this->cryingSound << endl;
}

#endif