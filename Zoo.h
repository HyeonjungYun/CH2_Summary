#ifndef _ZOO_H_
#define _ZOO_H_

#include "PreProcess.h"
#include "Animal.h"

class Animal;

class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
    int animalCount;
public:
    Zoo();
    void addAnimal(Animal* animal);
    void performActions();
    void display();
    ~Zoo();
};

#endif