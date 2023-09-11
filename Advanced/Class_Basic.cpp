#include <iostream>

using namespace std;

// Constructor giúp nhập dữ liệu nhanh hơn so với cách làm ở trên
// Class without Constructor
/*
class Function
{
public:
	string name;
	int age;
	string food;

	void identify()
	{
		cout << "Your name: " << this->name << endl;
		cout << "Your age: " << this->age << endl;
		cout << "Your favorite food: " << this->food << endl;
	}
};

int main()
{
	Function order;
	Function order2;

	order.name = "Quan";
	order.age = 21;
	order.food = "KFC";

	order2.name = "Chihiro Suzuki";
	order2.age = 21;
	order2.food = "KFC";

	cout << order.name << endl;
	cout << order.age << endl;
	cout << order.food << endl;

	cout << endl;

	cout << order2.name << endl;
	cout << order2.age << endl;
	cout << order2.food << endl;

	cout << endl;

	order.identify();
	cout << endl;
	order2.identify();

	return 0;
}
*/

class Function
{
public:
	string name;
	int age;
	string food;

	// Constructor
	Function(string name, int age, string food)
	{
		this->name = name;
		this->age = age;
		this->food = food;
	}

	// Destructor thường dùng để giải phóng bộ nhớ, xem thêm để hiểu rõ
	~Function()
	{
		cout << "This \"Function\" has been destroyed." << endl;
	}

	void display()
	{
		cout << name << endl;
		cout << age << endl;
		cout << food << endl;
	}
};

int main()
{
	Function person1 = Function("Ho Manh Quan", 23, "KFC");

	person1.display();

	return 0;
}

// Function outside class
/*
class HelloWorld
{
public:
	void sayHello();
};

void HelloWorld::sayHello()
{
	cout << "Hello, this is Jack." << endl;
}

int main()
{
	HelloWorld Jack;
	Jack.sayHello();

	return 0;
}
*/