#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a;
	cout << "Enter a demical number: ";
	cin >> a;
	cout << "a is nearly " << setprecision(5) << fixed << a << endl;
	// fixed ở đây là làm tròn số sau dấu chấm, nghĩa là làm tròn 5 chữ số thập phân
	cout << "a is nearly " << setprecision(5) << a << endl;
	// nếu không có fixed thì sẽ làm tròn 5 chữ số đầu tiên được nhập
	cout << setw(0) << 6 << endl;
	cout << setw(3) << 12 << endl;
	cout << setw(3) << 20.85629 << endl;
	cout << setw(9) << 20.85629 << endl;
	// setw() ở đây là để đặt vị trí các số phù hợp với vị trí mình đưa ra (tính từ chữ số sau cùng)
	// ở TH3, số 20.85629 có 8 chữ số/cái được đánh nên setw(3) sẽ không hoạt động
	// setw(0) với setw(1) giống nhau
	return 0;
}