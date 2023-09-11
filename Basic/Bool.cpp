#include <iostream>
using namespace std;

int main()
{
	bool a1 = 0;
	bool a2 = 1;
	cout << "a1 is: " << a1 << endl;
	cout << "a2 is: " << a2 << endl;

	cout << endl;

	bool a3 = true;
	bool a4 = false;
	cout << "a3 is: " << a3 << endl;
	cout << "a4 is: " << a4 << endl;

	cout << endl;

	cout << true << endl;
	cout << false << endl;
	cout << boolalpha << endl;
	cout << true << endl;
	cout << false << endl;

	cout << endl;

	bool b;
	cout << boolalpha << endl;
	b = -1; cout << b << endl;
	b = 0; cout << b << endl;
	b = 1; cout << b << endl;
	b = 2; cout << b << endl;
	b = 100; cout << b << endl;
	b = -999; cout << b << endl;

	// boolalpha dùng để hiện thị true/false thay vì 1/0
	// 0 mặc định là false, 1 và những số còn lại là true

	cout << endl;

	bool b1 = 1 < 2;
	bool b2 = 5 > 10;
	bool b3 = (1 + 1 == 2);

	int a = 2, c = 4;
	bool b4 = (a * 3 != c);

	cout << b1 << " " << b2 << " " << b3 << " " << b4 << endl;

	return 0;
}