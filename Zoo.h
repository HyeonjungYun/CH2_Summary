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

    // 동물원에 있는 모든 동물의 행동을 수행하는 함수
    // - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    void performActions();
    void display();
    ~Zoo();
};

#endif