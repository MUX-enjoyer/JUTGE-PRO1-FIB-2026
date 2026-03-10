#include <iostream>
using namespace std;

char base64_to_char(int value);

int main() {
	int value;
	while (cin >> value) {
		cout << base64_to_char(value) << endl;
	}
	return 0;
}
