#include <iostream>
using namespace std;

bool better_card(char c1, char c2);

int main() {
	char c1, c2;
	while (cin >> c1 >> c2) {
		string op = (better_card(c1, c2) ? ">" : "<=");
		cout << c1 << ' ' << op << ' ' << c2 << endl;
	}
	return 0;
}
