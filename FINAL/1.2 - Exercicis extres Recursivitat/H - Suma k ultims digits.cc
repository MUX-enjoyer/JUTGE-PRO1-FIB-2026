/*
H) Suma k últims dígits:
Dissenyeu una funció recursiva que, donat un nombre natural n i un enter k,
sumi només els k dígits de més a la dreta del nombre.
int suma_k_ultims(int n, int k)
* suma_k_ultims(123456, 3) → 15 (4+5+6)
* suma_k_ultims(987, 1)    → 7
*/
#include <iostream>
using namespace std;

int suma_k_ultims(int n, int k) {
    if (k == 0 or n == 0) return 0;
    return (n % 10) + suma_k_ultims(n / 10, k - 1);
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        cout << suma_k_ultims(n, k) << endl;
    }
}
