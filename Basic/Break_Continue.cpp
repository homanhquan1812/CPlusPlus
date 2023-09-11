#include <iostream>

using namespace std;

int main()
{
	for (int i = 10; i >= 0; i--)
	{
		cout << "Count down: " << i << endl;
		if (i <= 5)
			break; // break at 5
	}

	cout << endl;

	bool running = true;
	while (true)
	{
		// do something on running variable
		cout << "Hello" << endl;
		if (running) // or "true"
			break;
		// nếu if (running) hoặc if (true), chương trình chỉ chạy 1 lần
		// nếu if (!running) hoặc if (false), chương trình sẽ spam vô tận
	}

	cout << endl;

	for (int i = 0; i <= 20; i++)
	{
		if (i % 5 == 0)
			continue;

		// continue ở đây sẽ bỏ qua một vài công đoạn nếu thỏa điều kiện
		// như dòng code ở trên, những số chia hết cho 5 sẽ bị bỏ qua 

		cout << i << " ";
	}
}