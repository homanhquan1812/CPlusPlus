#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void makeSound()
	{
		cout << "This animal makes a sound." << endl;
	}
};

class Dog : public Animal
{
public:
	void makeSound() override
	{
		cout << "Dog barks." << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound() override
	{
		cout << "Cat meows." << endl;
	}
};

int main()
{
	Animal* animalPtr;
	Dog myDog;
	Cat myCat;

	animalPtr = &myDog;
	animalPtr->makeSound(); // Calls Dog's makeSound()

	animalPtr = &myCat;
	animalPtr->makeSound(); // Calls Cat's makeSound()

	return 0;
}