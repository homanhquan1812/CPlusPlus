#include <iostream>

using namespace std;

struct Student
{
	string name;
	int age;
};

// Struct có thể dùng public, private, protected giống Class
// Struct thường dùng cho Linked List

int main()
{
	Student Student1;

	Student1.name = "Ho Manh Quan";
	Student1.age = 23;

	cout << Student1.name << endl;
	cout << Student1.age << endl;

	return 0;
}