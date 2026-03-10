#include <iostream>
using namespace std;

bool is_sandwich(int n);

int main() {
	int n;
	while (cin >> n) {
		if (is_sandwich(n)) {
			cout << n << endl;
		}
	}
	return 0;
}
