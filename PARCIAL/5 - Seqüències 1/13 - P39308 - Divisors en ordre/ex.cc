#include <iostream>
using namespace std;

int sqrt(int n) {
    int i = 1;
    while (i * i <= n) i++;
    return i - 1;
}

int main() {
    int n;
    while (cin >> n) {
        cout << "divisors de " << n << ':';

        int sq = sqrt(n);
                        // i < sq
        for (int i = 1; i*i < n; i++) {
            if (n % i == 0) cout << " " << i;
        }

        for (int i = sq; i >= 1; i--) {
            if (n % i == 0) cout << " " << n / i;
        }

        cout << endl;
    }
}