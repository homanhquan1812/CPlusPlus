#include <iostream>

using namespace std;

int main()
{
	/*
	int i;
	for (i = 0; i < 10; i++)  // (i--)
	{
		cout << i << endl;
	}
	*/

	/*
	int i;
	for (i = 0; i <= 10; i += 2)
	{
		cout << i << endl;
	}
	*/

	char letter;
	cout << "Enter a letter you like: ";
	cin >> letter;

	cout << endl;

	int height;
	cout << "Enter the height number you want: ";
	cin >> height;

	cout << endl;

	int width;
	cout << "Enter the width number you want: ";
	cin >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << letter << " ";
		}
		cout << "\n" << endl;
	}
	return 0;
}