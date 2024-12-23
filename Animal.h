#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include "PreProcess.h"
#include "Zoo.h"

class Animal{
public:
	virtual string getAnimalName() = 0;
	virtual void makeSound() = 0;
};

#endif