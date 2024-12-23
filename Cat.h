#ifndef _CAT_H_
#define _CAT_H_

#include "PreProcess.h"
#include "Animal.h"

class Cat : public Animal {
private:
	string animalName;
	string cryingSound;
public:
	Cat();
	string getAnimalName() override;
	void makeSound();
};

Cat::Cat() {
	this->animalName = "Cat";
	this->cryingSound = "Meow";
}

string Cat::getAnimalName() {
	return this->animalName;
}

void Cat::makeSound() {
	cout << this->cryingSound << endl;
}

#endif