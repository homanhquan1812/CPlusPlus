#include <iostream>

using namespace std;

/*
template <typename T>
// Có thể thay "typename" bằng "class"
T maximum(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	int intMax = maximum(3, 7);
	char charMax = maximum('a', 'b');

	cout << intMax << endl;
	cout << charMax << endl;

	return 0;
}
*/

// Class template for a simple Pair
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    // Constructor that takes parameters by reference
    Pair(const T1 &f, const T2 &s) : first(f), second(s) {}
};

int main() {
    // Creating instances of Pair with different data types
    Pair<int, double> p1(1, 3.14);
    Pair<string, int> p2("Hello", 42);

    // Accessing and displaying the values
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;

    return 0;
}
