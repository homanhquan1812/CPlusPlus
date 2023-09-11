#include <iostream>

using namespace std;


int value = 1;

int main() {

	int value = 10;
	cout << "Local value: " << value << endl; // 10
	cout << "Global value: " << ::value << endl; // 1
	// :: dùng để quay lại biến ở trên int main ()
	return 0;
}

/*
int main()
{
	{
		int testingNumber = 50;
	}
	// biến bị hủy trong {} khác

	cout << testingNumber << endl;
	return 0;
}
*/