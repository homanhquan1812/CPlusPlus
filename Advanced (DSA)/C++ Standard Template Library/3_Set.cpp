#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Set là một loại associative containers để lưu trữ các phần tử không bị trùng lặp (unique elements), 
// và các phần tử này chính là các khóa (keys).

vector<int> NumbersInVector(int n)
{
	vector<int> vec;

	for (int i = 1; i <= n; i++)
	{
		vec.push_back(i);
	}

	return vec;
}

// Exercise 1:
int differentNumbers(vector<int> inputVector)
{
	set<int> setOfNumbers;

	for (int i = 0; i < inputVector.size(); i++)
	{
		setOfNumbers.insert(inputVector[i]);
	}

	return setOfNumbers.size();
}

int main()
{
	int n = 10;

	vector<int> vec1 = NumbersInVector(n);

	int result1 = differentNumbers(vec1);

	for (auto i : vec1)
	{
		cout << i << " ";
	}

	cout << endl;

	cout << result1;

	return 0;
}