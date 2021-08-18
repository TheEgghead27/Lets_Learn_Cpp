
// X ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "Ham";
	string food2 = "Sandwich";
	cout << food.find("Ham") << std::endl;  // we dont need the std:: since namespace is declared but technically this is not a problem
	cout << food + food2 << endl;
	cout << food[0] << endl;
	string y;
	getline(cin, y);
	return 0;
}






































// line 11 - Missing " to right of Ham
// line 11 - do not need 'std::', we're already 'using namespace std'
// line 13 - misspelled variable food.