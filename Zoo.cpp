#include "Zoo.h"


Zoo::Zoo() {
    this->animalCount = 0;
}

Zoo::~Zoo() {
    for (int i = 0; i < animalCount; i++) {
        delete animals[i];
    }
    delete this;
}

void Zoo::addAnimal(Animal* animal) {
    if (this->animalCount >= 10) {
        cout << "µ¿¹°¿øÀÌ °¡µæÃ¡½À´Ï´Ù." << endl;
        return;
    }

    this->animals[this->animalCount] = animal;
    this->animalCount++;
}

void Zoo::performActions() {
    for (int i  = 0; i < animalCount; i++)
        animals[i]->makeSound();
}

void Zoo::display() {
    for (int i = 0; i < animalCount; i++)
        if(animals[i] != nullptr)
            cout << animals[i]->getAnimalName() << endl;
}