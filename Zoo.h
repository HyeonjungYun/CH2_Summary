#ifndef _ZOO_H_
#define _ZOO_H_

#include "PreProcess.h"
#include "Animal.h"

class Animal;

class Zoo {
private:
    Animal* animals[10]; // ���� ��ü�� �����ϴ� ������ �迭
    int animalCount;
public:
    Zoo();
    void addAnimal(Animal* animal);

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions();
    void display();
    ~Zoo();
};

#endif