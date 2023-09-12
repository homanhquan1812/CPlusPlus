#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// ifstream (dùng để đọc file)
	ifstream ifs("test1.txt");

	/* Có thể ghi:
	ifstream ifs;
	ifs.open("test1.txt", ifstream::in);
	*/

	char c = ifs.get();

	while (ifs.good())
	{
		cout << c;
		c = ifs.get();
	}

	ifs.close();

	// ofstream (dùng để ghi file)

	ofstream ofs("test2.txt");

	if (ofs.is_open())
	{
		ofs << "This text has been written.";

		ofs.close();
	}

	/* Có thể ghi (cách này có thể ghi đè lên)
	ofstream ofs;
	ofs.open("test2.txt", ofstream::app);

	ofs << "This text has been written.";


	ofs.close();
	*/

	return 0;
}