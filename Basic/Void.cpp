#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
void testFunction()
{
	cout << "Hello World!" << endl;
}

int main()
{
	testFunction();
	return 0;
}
*/

/*
void testFunction(string myName, int myAge)
{
	cout << "Your name is: " << myName << endl;
	cout << "Your age is: " << myAge << endl;
}

int main()
{
	testFunction("Ho Manh Quan", 21);
	return 0;
}
*/

/*
void testFunction(string myName, int myAge)
{
	cout << "Your name is: " << myName << endl;
	cout << "Your age is: " << myAge << endl;
}

int main()
{
	string myName;
	cout << "Enter your name: ";
	getline(cin, myName);
	int myAge;
	cout << "Enter your age: ";
	cin >> myAge;

	testFunction(myName, myAge);
	return 0;
}
*/

double testFunction(double num1, double num2)
{
	double num3 = num1 + num2;
	// O tren dung double thi o duoi phai dung double
	return num3;
}

// Muon dong o tren nam duoi int main() thi chi can viet lai tieu de double....;

void foodOrder(string water, string food, int money)
{
	cout << "Here is a bottle of " << water << " you order." << endl;
	cout << "Here is your " << food << "." << endl;
	cout << "You're lucky, it's $" << money << " in total." << endl;
}

int main()
{
	double number1 = 30;
	double number2 = 20;
	double num3 = testFunction(number1, number2);
	cout << "Number 1 + Number 2 = " << num3 << endl;

	cout << endl;

	string water;
	cout << "What would you like to drink? ";
	getline(cin, water);
	string food;
	cout << "What would you like to eat? ";
	getline(cin, food);
	cout << "Hmm, that will cost a lot of money, I'm afraid." << endl;
	int money;
	cout << "How much money do you have? ";
	cin >> money;

	cout << endl;

	foodOrder(water, food, money);
	cout << "Enjoy your meal!" << endl;

	return 0;
}
