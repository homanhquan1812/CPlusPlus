#include <iostream>
#include <vector>
#include <list>

// List được thực hiện như danh sách nối kép (doubly-linked list). 
// Mỗi phần tử trong danh sách nối kép có liên kết đến một phần tử trước đó và một phần tử sau nó.
// Do đó, list có ưu điểm là chèn và loại bỏ phần tử ở bất cứ vị trí nào trong container 
// nếu biết được interator trỏ đến phần tử đó
// Nếu chưa biết interator của phần tử cần xóa hoặc ở vị trí cần chèn thì có thể tìm iterator đó thông qua begin() hoặc end().
// end() không phải là iterator trỏ tới phần tử cuối cùng mà trỏ tới sau phần tử cuối cùng.

using namespace std;

// Exercise 1:
list<int> initialList(int n)
{
    list<int> myList;

    for (int i = 0; i < n; i++)
    {
        myList.push_back(i);
    }
    return myList;
}

vector<int> verifyFunction(int n)
{
    list<int> list1 = initialList(n);
    vector<int> res(list1.begin(), list1.end());

    return res;
}

// Exercise 2:
int SumOfFirstAndLastElement(list<int> initialList2)
{
    if (initialList2.size() == 0)
    {
        return -1;
    }
    else if (initialList2.size() == 1)
    {
        return initialList2.front();
    }

    return initialList2.front() + initialList2.back();
}

// Exercise 3:
list<int> DeleteFrontAndBack(list<int> list2)
{
    list2.pop_back();
    list2.pop_front();

    return list2;
}

vector<int> verifyFunction2(vector<int> vector2)
{
    list<int> list2(vector2.begin(), vector2.end());
    list2 = DeleteFrontAndBack(list2);
    vector<int> ans(list2.begin(), list2.end());

    return ans;
}

// Exercise 4: Thay đổi số x trong mảng theo thứ tự k
// v = [1, 2, 3, 4]; k = 2; x = 100 -> [1, 100, 3, 4]
// v = [4, 6, 9, 7, 3]; k = 4; x = 100 -> [4, 6, 7, 100, 3]
// Đây là nhược điểm của list, nó không thể truy vấn phẩn tử trong nó bằng toán tử [] như vector hoặc mảng
list<int> changeValue(list<int> list3, int k, int n)
{
    list<int>::iterator it = list3.begin(); // it trỏ vào phần tử đầu tiên
    advance(it, k - 1);
    *it = n;

    return list3;
}

vector<int> verifyFunction3(vector<int> v, int k, int x) {
    list<int> l(v.begin(), v.end());
    l = changeValue(l, k, x);
    vector<int> vec(l.begin(), l.end());
    return vec;
}

// Exercise 5: Delete numbers from first to last
list<int> changeValue2(list<int> list4, int first, int last)
{
    list<int>::iterator it = list4.begin();
    advance(it, first-1);
    list<int>::iterator it2 = list4.begin();
    advance(it2, last);
    list4.erase(it, it2);

    return list4;
}

vector<int> verifyFunction4(vector<int> v, int first, int last)
{
    list<int> l(v.begin(), v.end());
    l = changeValue2(l, first, last);
    vector<int> vec(l.begin(), l.end());

    return vec;
}

// Exercise 6:
int SumOfAllElements(list<int> linkedList)
{
    int sum = 0;
    for (auto i : linkedList)
    {
        sum += i;
    }
    // Or we can write:
    /*
    for (list<int>:: iterator i=linkedList.begin(); i != linkedList.end(); i++){
	    sum += *i;
	}
    */

    return sum;
}

int verifyFunction5(vector<int> v)
{
    list<int> l(v.begin(), v.end());

    return SumOfAllElements(l);
}

// Exercise 7: Remove
list<int> removeElements(list<int> linkedList, int n) 
{
	linkedList.remove(n);
	return linkedList;
}

vector<int> verifyFunction6(vector<int> v, int n) 
{
	list<int> l(v.begin(), v.end());
	l = removeElements(l, n);
	vector<int> vec(l.begin(), l.end());
	return vec;
}

// Exercise 8: Sort
list<int> sortLinkedList(list<int> l) 
{
    l.sort();
	return l;
}

vector<int> verifyFunction7(vector<int> v) 
{
	list<int> l(v.begin(), v.end());
	l = sortLinkedList(l);
	vector<int> vec(l.begin(), l.end());
	return vec;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << endl;

    // Exercise 1:
    cout << "Exercise 1:" << endl;
    vector<int> result = verifyFunction(n);

    for (auto i : result)
    {
        cout << i << " ";
    }

    cout << endl;

    // Exercise 2:
    cout << "Exercise 2:" << endl;
    list<int> vecList(result.begin(), result.end());
    int result2 = SumOfFirstAndLastElement(vecList);
    cout << result2 << endl;

    // Exercise 3:
    cout << "Exercise 3:" << endl;
    vector<int> result3 = verifyFunction2(result);

    for (auto i : result3)
    {
        cout << i << " ";
    }

    cout << endl;

    // Exercise 4:
    cout << "Exercise 4:" << endl;
    vector<int> result4 = verifyFunction3(result, 5, 100);

    for (auto i : result4)
    {
        cout << i << " ";
    }

    cout << endl;

    // Exercise 5:
    cout << "Exercise 5:" << endl;
    vector<int> result5 = verifyFunction4(result, 3, 6);

    for (auto i : result5)
    {
        cout << i << " ";
    }

    cout << endl;

    // Exercise 6:
    cout << "Exercise 6:" << endl;
    int result6 = verifyFunction5(result);

    cout << result6;

    cout << endl;

    // Exercise 7:
    cout << "Exercise 7:" << endl;
    vector<int> vecList2 = {1, 2, 1, 2, 7, 2, 2, 0, 1, 3, 4};
    vector<int> result7 = verifyFunction6(vecList2, 2);

    for (auto i : result7)
    {
        cout << i << " ";
    }

    cout << endl;

    // Exercise 8:
    cout << "Exercise 8:" << endl;
    vector<int> result8 = verifyFunction7(vecList2);

    for (auto i : result8)
    {
        cout << i << " ";
    }

    return 0;
}