#include "Zoo.h"
#include "Animal.h"
#include "Dog.h"
#include "Cow.h"
#include "Cat.h"

Animal* createRandomAnimal();

int main() {
    Zoo* zoo = new Zoo;
    
	while (1) {
        int selNum;

        cout << "1.���� ���� 2. ������ Ȯ�� 3. ������ �ൿ 4. ����" << endl;
        cin >> selNum;

        if (selNum == 1) zoo->addAnimal(createRandomAnimal());
        if (selNum == 2) zoo->display();
        if (selNum == 3) zoo->performActions();
        if (selNum == 4) break;
	}
    delete zoo;
}

Animal* createRandomAnimal() {
    srand(time(nullptr));

    int animalNumber = rand() % 3;

    if (animalNumber == 0)
        return new Dog();
    if (animalNumber == 1)
        return new Cat();
    if (animalNumber == 2)
        return new Cow();
    return nullptr;
}