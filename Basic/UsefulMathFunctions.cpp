#include <iostream>
#include <math.h>

// #include <math.h> = #include <algorithm>

using namespace std;

int main()
{
	// Min-Max
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	cout << endl;
	double c = max(a, b);
	double d = min(a, b);
	cout << "Gia tri lon nhat la: " << c << endl;
	cout << "Gia tri nho nhat la: " << d << endl;

	cout << endl;

	// pow()
	double e = pow(a, b);
	cout << "a ^ b = " << e << endl;

	cout << endl;

	// sqrt()
	double f = sqrt(a);
	cout << "f ^ 2 = a -> f = " << f << endl;

	cout << endl;

	// abs()
	int g = -54;
	double h = abs(g);
	cout << "g = -54 -> |g| = " << h << endl;

	cout << endl;

	// round()
	float i = 3.14, j = 3.5;
	double k = round(i);
	double l = round(j);
	cout << "3.14 is approximately " << k << endl;
	cout << "3.5 is approximately " << l << endl;

	cout << endl;

	// ceil() - floor()
	// ceil() goes up, floor() goes down
	float m = 3.5;
	double n = ceil(m);
	double o = floor(m);
	cout << "ceil(3.14) will be " << n << endl;
	cout << "floor(3.14) will be " << o << endl;

	cout << endl;


	// static_cast<new type>(expression)
	int x, y;
	cout << "Enter a number for x and y: ";
	cin >> x >> y;
	cout << "x / y = " << static_cast<float>(x) / static_cast<float>(y) << endl;

	return 0;
}