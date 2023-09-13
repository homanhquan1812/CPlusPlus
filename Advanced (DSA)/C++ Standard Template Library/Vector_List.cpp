#include <iostream>
#include <vector>
#include <list>
// We all know that Array has a lot of limitations, Vector is one of the solutions to solve that problem

using namespace std;

// Example 1:
vector<int> InitializeaVector(int n)
{
	vector<int> listofNumbers;

	for (int i = 1; i <= n; i++)
	{
		listofNumbers.push_back(i);
	}

	return listofNumbers;
}

// Example 2:
int SumInVector(vector<int> listofNumbers)
{
	int sum = 0;
	for (int i = 1; i <= listofNumbers.size(); i++)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	// Create a vector for integers and string
	vector<int> listforIntegers;
	list<string> listforString; // List will be used for string
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
	// At here, with vector declared, we don't even need the number of elements in vector unlike array
	for (int i = 0; i < listforIntegers.size(); i++)
	{
		cout << listforIntegers[i] << " ";
	}

	cout << endl;

	// For shorter, we will write
	for (int i : listforIntegers)
	{
		cout << i << " ";
	}
	
	cout << endl;

	// We can't use int for this case, so we have to declare #include <list>
	for (string str : listforString)
	{
		cout << str << " ";
	}

	cout << endl;

	listforIntegers_2.pop_back(); // This command will remove the last element: 10

	for (int i : listforIntegers_2)
	{
		cout << i << " ";
	}

	cout << endl;

	// Example 1:
	vector<int> listofNumbers = InitializeaVector(10);

	for (int i : listofNumbers)
	{
		cout << i << " ";
	}

	cout << endl;

	// Example 2:
	vector<int> myVector{1, 2, 3, 4, 5};
	int sumofIntergers = SumInVector(myVector);

	cout << sumofIntergers;

	cout << endl;

	// Example 3: Iterator
	vector<int>::iterator it;

	int sum = 0;

	for (it = listforIntegers.begin(); it != listforIntegers.end(); it++)
	{
		sum += *it;
	}

	cout << sum << endl;

	return 0;
}