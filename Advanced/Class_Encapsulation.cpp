#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return name;
	}

	void setAge(int age)
	{
		this->age = age;
	}

	int getAge()
	{
		return age;
	}

	void printInfo()
	{
		cout << getName() << endl;
		cout << getAge() << endl;
	}
};

int main()
{
	Person Person1 = Person("Ho Manh Quan", 23);

	Person1.printInfo();

	Person1.setName("Quan");
	Person1.setAge(21);

	cout << endl;

	Person1.printInfo();

	return 0;
}