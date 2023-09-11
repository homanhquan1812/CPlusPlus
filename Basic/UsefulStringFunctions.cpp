#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Coi thêm phần strlen, strcmp, strcat_s, strcpy_s

	// length()
	string myName = "Ho Manh Quan";
	cout << "The length of your name is: " << myName.length() << endl;

	cout << endl;

	// append()
	string myUsername = "garenaquan987";
	cout << "Your email address will be: " << myUsername.append("@gmail.com") << endl;

	cout << endl;

	// insert()
	string name = "hoquan";
	cout << "Your email address will be: " << name.insert(2, "manh") << endl;

	cout << endl;

	// at()
	string myName2 = "Quan";
	cout << "The chosen letter of my name will be: " << myName2.at(0) << endl;

	cout << endl;

	// erase()
	string myName3 = "HOMANHQUAN";
	cout << "Some letters of your name has been removed . New name will be: " << myName3.erase(2, 4) << endl;

	cout << endl;

	// empty()
	string yourName;
	cout << "Enter your name: ";
	getline(cin, yourName);
	if (yourName.empty())
		cout << "Please try again!" << endl;
	else
		cout << "Hello " << yourName << endl;

	// substr()
	string yourName2 = "HoManhQuan";
	cout << "Your name is: " << yourName2.substr(2, 4) << endl;
	string yourName3 = "Ho Manh Quan";
	cout << "Your name is: " << yourName3.substr(2, 5) << endl;

	cout << endl;

	// find() - Location
	string yourName4 = "Ho Manh Quan";
	string sub_string;
	cout << "Which character(s) do you want to find? ";
	getline(cin, sub_string);

	int position = yourName4.find(sub_string);
	cout << "Found character(s): " << position << endl;

	cout << endl;

	// string(str, n, p)
	// n: vị trí 
	// p: số chữ cái
	string myName5 = "HOMANHQUAN";
	string myName6(myName5);
	string myName7(myName5, 4);
	string myName8(myName6, 4, 3);

	cout << myName5 << endl;
	cout << myName6 << endl;
	cout << myName7 << endl;
	cout << myName8 << endl;

	return 0;
}