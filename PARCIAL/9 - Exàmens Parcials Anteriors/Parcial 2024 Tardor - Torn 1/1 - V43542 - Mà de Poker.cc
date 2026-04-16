#include <iostream>
using namespace std;

string poker_hand(char c1, char c2, char c3);

int main() {
	char c1, c2, c3;
	while (cin >> c1 >> c2 >> c3) {
		cout << poker_hand(c1, c2, c3) << endl;
	}
	return 0;
}
