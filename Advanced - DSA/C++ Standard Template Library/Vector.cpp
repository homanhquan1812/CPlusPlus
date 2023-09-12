#include <iostream>
#include <vector>
// We all know that Array has a lot of limitations, Vector is one of the solutions to solve that problem

using namespace std;

vector<int> InitializeaVector(int n)
{
	vector<int> listofNumbers;

	for (int i = 1; i <= n; i++)
	{
		listofNumbers.push_back(i);
	}

	return listofNumbers;
}

int main()
{
	// Create a vector for integers and string
	vector<int> listforIntegers;
	vector<string> listforString;
	vector<int> listforIntegers_2{6, 7, 8, 9, 10};

	// Add elements into vectors
	listforIntegers.push_back(1);
	listforIntegers.push_back(2);
	listforIntegers.push_back(3);

	listforString.push_back("Ho");
	listforString.push_back("Manh");
	listforString.push_back("Quan");

	// Print the size of each vector
	cout << "Size of \"listforIntergers\": " << listforIntegers.size() << endl;
	cout << "Size of \"listforString\": " << listforString.size() << endl;
	cout << "Size of \"listforIntergers_2\": " << listforIntegers_2.size() << endl;

	cout << endl;

	// Print all elements in each vector
	for (int i = 0; i < listforIntegers.size(); i++)
	{
		cout << listforIntegers[i] << " ";
	}
	
	cout << endl;

	for (int i = 0; i < listforString.size(); i++)
	{
		cout << listforString[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < listforIntegers_2.size(); i++)
	{
		cout << listforIntegers_2[i] << " ";
	}

	cout << endl;

	// Example for vector
	vector<int> listofNumbers = InitializeaVector(10);

	for (int i : listofNumbers)
	{
		cout << i << " ";
	}

	return 0;
}