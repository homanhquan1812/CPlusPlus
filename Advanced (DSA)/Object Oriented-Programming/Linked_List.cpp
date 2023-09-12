#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* createNode(int x)
{
	Node* temp = new Node; // Tạo mới 1 node
	temp->next = NULL; // Node này chưa trỏ đến phần tử khác
	temp->data = x; // Gắn giá trị cho node

	return temp;
}

Node* addElement(Node* p, int x)
{
	Node* temp = createNode(x); // Tạo 1 node mới có giá trị x
	p->next = temp; // Thêm node đó vào cuối danh sách

	return temp; // Trả về node temp, vì temp giờ đã là node cuối của list
}

void printList(Node* l)
{
	Node* p = l;

	while (p != NULL) // Nếu con trỏ mà trỏ tới NULL thì đó là phần tử cuối cùng của Linked List
	{
		cout << p->data << " ";
		p = p->next;
	}
}

int main()
{
	int n, x;

	// n là số phần tử
	// x là giá trị từng phần tử

	cout << "Enter n: ";
	cin >> n >> x;

	Node* l = createNode(x);
	Node* p = l;

	for (int i = 1; i < n; i++)
	{
		cin >> x;

		p = addElement(p, x);
	}

	printList(l);

	return 0;
}