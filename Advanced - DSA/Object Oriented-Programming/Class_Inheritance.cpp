#include <iostream>

using namespace std;

class Animal // Base Class
{
public:
	void eat()
	{
		cout << "This animal is eating." << endl;
	}
};

class Dog : public Animal // Derived Class
{
public:
	void bark()
	{
		cout << "Dog is barking." << endl;
	}
};

int main()
{
	Dog myDog;

	myDog.bark(); // Inherited from Animal
	myDog.eat(); // Own method from Dog

	return 0;
}