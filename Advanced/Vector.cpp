#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Creating a vector of integers
	vector<int> numbers;

	// Adding elements to the vector
	for (int i = 1; i < 6; i++)
	{
		numbers.push_back(i);
	}

	// Accessing elements using indexing
	cout << "Elements of the vector: ";

	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}

	// Using iterators to traverse the vector
	cout << "Using iterators: ";
	for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// Adding more elements using initializer list
	numbers = { 40, 50, 60 };

	// Using range-based loop to print elements
	cout << "Using range-based loop: ";
	for (int num : numbers) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}