#include <iostream>

using namespace std;


// typedef thường dùng trong class và struct

/*
typedef int Age;
typedef string Job;
*/

/*
int main()
{
	Age ofQuan = 23;
	Job QuansJob = "Software Developer";

	cout << ofQuan << endl;
	cout << QuansJob << endl;

	return 0;
}
*/

class testClass
{
public:
	void voidClass()
	{
		cout << "Test this class." << endl;
	}
};

typedef testClass tC;

struct testStruct
{
	void voidStruct()
	{
		cout << "Test this struct." << endl;
	}
};

typedef testStruct tS;

int main()
{
	tC tC1;
	tS tS1;

	tC1.voidClass();
	tS1.voidStruct();

	return 0;
}

// Như vậy ta có thể thấy typedef có thể thêm được tên mới cho các kiểu mà người dùng định nghĩa (class & struct) 
// và nó giúp chúng ta dễ ghi nhớ tên của các kiểu dữ liệu, lớp hay cấu trúc một cách dễ dàng, dễ hiểu và dễ sử dụng hơn. 
// Đồng thời nó cũng giúp giảm đi thời gian code đáng kể đấy.


// typedef struct
/*
#include <iostream>

using namespace std;

// Define a struct with typedef
typedef struct {
	string name;
	int age;
} Student;

int main() {
	// Create a struct instance
	Student s;
	s.name = "Bob";
	s.age = 22;

	cout << "Student's name: " << s.name << endl;
	cout << "Student's age: " << s.age << endl;

	return 0;
}

*/