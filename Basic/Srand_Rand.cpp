// Example of Srand-Rand
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int guess;
	int score = 0;

	srand(time(NULL));
	int number = rand() % 20;
	// Random numbers will run from 0 to 19
	// rand() % 20 + 1: from 1 to 20
	cout << "Random nummber is: " << number << endl;

	cout << endl;

	// Example of Srand-Rand + Do-While
	number = rand() % 10 + 1;
	do
	{
		cout << "Enter your guess number from 1 to 10: ";
		cin >> guess;
		if (number > guess)
			cout << "Our number is much larger than your number." << endl;
		else if (number < guess)
			cout << "Our number is much smaller than your number." << endl;
		else
			cout << "Correct. Congratulations!" << endl;
		score++;
	} while (number != guess);
	cout << "The number of times you tried is: " << score << endl;

	return 0;
}

