#include <iostream>
using namespace std;

int char_to_base64(char c);

int main() {
	char c;
	while (cin >> c) {
		cout << char_to_base64(c) << endl;
	}
	cout << endl;
	return 0;
}
