
// X ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[]{ 1,5,7,8,9, };

	cout << a << endl;
	cout << &a << endl;  // address of a, which is already an array (which is a pointer), thats a little sussy but still legal
	cout << a[0] << endl;  // change parenthesis to brackets
	cout << **a << endl;  // double dereferencing, won't work
	cout << a+1 << endl;  // this only shows the address of the next int

	string y;
	getline(cin, y);
	return 0;
}






































// line 
// line 
// line 
// line 







