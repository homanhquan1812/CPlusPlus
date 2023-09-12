#include <iostream>
#include <string>

// Tóm tắt: Biến là một ô đơn lẻ hay một vùng nhớ được hệ điều hành cấp phát cho chương trình C++ nhằm để lưu trữ giá trị vào vùng nhớ đó
// Để truy xuất giá trị đó, chương trình cần "Địa chỉ" của biến để đọc giá trị ở trong vùng nhớ đó

// Người dùng chỉ có thể truy xuất giá trị này thông qua Virtual Memory (bộ nhớ ảo), không trực tiếp qua Physical Memory (Bộ nhớ vật lý) được

// Địa chỉ mà ta thấy là những địa chỉ được đánh số thứ tự trên Virtual Memory
// Để thấy được chúng, ta chỉ cần thêm dấu "&" trước biến (Quan sát ví dụ ở dưới)

using namespace std;

int main()
{
	int x = 5;
	cout << x << endl;
	cout << &x << endl;

	// Tham chiếu (Reference): Sử dụng chung vùng nhớ
	cout << endl;

	int y = 10;
	int& z_ref = y;
	cout << &y << endl;
	cout << &z_ref << endl;

	cout << endl;

	// Toán tử trỏ (Dereference operator) - Toán tử điều hành gián tiếp (Indirection operator)
	int n = 5;
	cout << n << endl;     //print the value of variable n
	cout << &n << endl;    //print the virtual memory address of variable n
	cout << *(&n) << endl; //print the value at the virtual memory address of variable n

	cout << endl;

	int v = 6;
	cout << v << endl;
	*(&v) = 10;
	cout << v << endl;

	// khai báo pointer
	/*
	int* iPtr;
	float* fPtr;
	double* dPtr;
	*/
	// không nên dùng int *iPtr;

	// kích thước con trỏ trong bộ nhớ
	// x86: 4 ---- x64: 8
	cout << sizeof(char*) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(string*) << endl;

	cout << endl;

	// gán giá trị cho con trỏ
	string name = "Quan";
	int age = 21;
	string favoriteFood = "KFC";

	string* pName = &name;
	int* pAge = &age;
	string* pFavoriteFood = &favoriteFood;

	cout << "My name is: " << name << endl;
	cout << "My name is: " << pName << endl;
	cout << "I'm " << age << " years old." << endl;
	cout << "I'm " << pAge << " years old." << endl;
	cout << "My favorite food is " << favoriteFood << endl;
	cout << "My favorite food is " << pFavoriteFood << endl;

	cout << endl;

	// Lưu ý:
	// Không được gõ:
	/*
	int* ptr = 1952941;
	int* ptr = 00C75SF2;
	*/

	// 1 đoạn code tương tự:
	int* ptr; //declare an int pointer
	int value = 5;

	ptr = &value; //ptr point to value

	cout << &value << endl; //print the address of value
	cout << ptr << endl;    //print the address of value which is held in ptr

	cout << value << endl;  //print the content of value
	cout << *(&value) << endl; //print the content of value
	cout << *ptr << endl;	//print the content of value

	// NULL
	/*
	int *ptr; //declare an int pointer
	cout << *ptr << endl;
	=> Lỗi (do không có địa chỉ khởi tạo cụ thể)
	*/

	ptr = NULL;
	cout << "The value of ptr is: " << ptr << endl;

	return 0;
}