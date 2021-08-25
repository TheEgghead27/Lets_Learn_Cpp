
// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 0; i >= 10; i+= 2)
		cout << i-- << end;  // these cancel out the  ++
	string y;
	getline(cin, y);
	return 0;
}






































// line 9 - missing '>' next to middle equal sign
//			to break the looping condition
// line 10 - Should not have decrement in cout,
//			otherwise, program loops forever







