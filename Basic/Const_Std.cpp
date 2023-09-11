#include <iostream>

int main()
{
	const int myMoney = 100000000;
	int myMoney1(myMoney);
	int myMoney2{ myMoney };
	int myDebt;
	std::cout << "Enter your debt money: ";
	std::cin >> myDebt;
	int myMoney_left = myMoney - myDebt;
	std::cout << "My money left is: " << myMoney_left << std::endl;
	return 0;
}