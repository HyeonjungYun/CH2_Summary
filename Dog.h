#ifndef _DOG_H_
#define _DOG_H_

#include "PreProcess.h"
#include "Animal.h"

class Dog : public Animal {
private:
	string animalName;
	string cryingSound;
public:
	Dog();
	string getAnimalName() override;
	void makeSound();
};

Dog::Dog() {
	this->animalName = "Dog";
	this->cryingSound = "Bow Bow";
}

string Dog::getAnimalName() {
	return this->animalName;
}

void Dog::makeSound() {
	cout << this->cryingSound << endl;
}

#endif