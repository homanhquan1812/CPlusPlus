#include <iostream>
#include <string>

using namespace std;

int main()
{
	int favoriteNumber[] = { 18,12,2000 };
	string favoriteFood[] = { "KFC", "Pho", "Beef" };

	cout << favoriteNumber[2] << endl; //2000
	cout << favoriteFood[1] << endl;

	cout << endl;

	favoriteNumber[2] = { 2019 };
	cout << favoriteNumber[2] << endl; // 2019

	cout << endl;

	char alphabet[3][4] = {
		{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}
	};

	cout << alphabet[1][2] << endl;

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << alphabet[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < size(favoriteNumber); i++)
	{
		cout << favoriteFood[i] << endl;
	}

	cout << endl;


	// Array[] + Pointer 

	int number;
	cout << "How many cars do you have? ";
	cin >> number;
	cin.ignore();

	string* pCars = new string[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Give a name of Car #" << i + 1 << " ";
		getline(cin, pCars[i]);
	}

	cout << endl;

	cout << "Here is your garage" << endl;
	for (int i = 0; i < number; i++)
	{
		cout << "Parking spot #" << i + 1 << " " << pCars[i] << endl;
		getline(cin, pCars[i]);
	}

	return 0;
}