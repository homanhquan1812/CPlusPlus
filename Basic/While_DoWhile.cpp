#include <iostream>
#include <string>

using namespace std;

int main()
{
	// while()
	/*
	while (1 == 1)
	{
		cout << "Hello World!" << endl;
	}
	return 0;
	*/
	string myName;
	while (myName.empty())
	{
		cout << "Enter your name: ";
		getline(cin, myName);
		cout << endl;
	}
	cout << "Hello " << myName << ", nice to meet you." << endl;

	cout << endl;

	// do-while
	string yourAnswer;
	do
	{
		cout << "Loading..." << endl;
		cout << "Welcome to the game! Press S to start the game: ";
		getline(cin, yourAnswer);
	} while (yourAnswer.at(0) != 'S' && yourAnswer.at(0) != 's');
	cout << "Let's get started!" << endl;

	cout << endl;

	// In conclusion: Nếu điều kiện ở trong while thỏa, while sẽ dùng loop để chạy lại chương trình cho đến khi điều kiện trong while không còn thỏa nữa.
	// In conclusion: while và do-while hầu như giống nhau, chỉ khác mỗi cách viết. 
	// Do-while thường được dùng với if-else

	return 0;
}