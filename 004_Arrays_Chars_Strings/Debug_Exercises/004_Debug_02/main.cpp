
// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	int my_array[]{ 1,2,3 };
	cout << my_array[2] << endl;
	string y;
	getline(cin, y);
	return 0;
}






































// line 5 - 'string' mispelled, missing i
// line 9 - missing semicolon at end
// lin 10 - index of array does not exist. size is 3 and
//			its trying to reach fourth item.