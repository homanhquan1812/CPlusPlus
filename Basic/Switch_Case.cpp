#include <iostream>

using namespace std;

int main()
{
	int month;
	cout << "Enter the number of months (1-4): ";
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "1 is January" << endl;
		break;
	case 2:
		cout << "2 is February" << endl;
		break;
	case 3:
		cout << "3 is March" << endl;
		break;
	case 4:
		cout << "4 is April" << endl;
		break;
	default:
		cout << "Please type correctly the number of months mentioned." << endl;
	}
	return 0;
}