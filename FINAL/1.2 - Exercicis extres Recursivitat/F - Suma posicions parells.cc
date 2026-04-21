/*
F) Suma posicions parells:
Dissenyeu una funció recursiva que, donat un natural n, sumi només els seus
dígits que ocupin posicions parelles (posició 1 = dígit menys significatiu).
* suma_parells(1234)   → 6  (2 + 4)
* suma_parells(135)    → 3
* suma_parells(010101) → 3  (1+1+1)
*/
#include <iostream>
using namespace std;

int suma_parells(int n, int pos = 1) {
    if (n == 0) return 0;
    int digit = n % 10;
    int resta = suma_parells(n / 10, pos + 1);
    if (pos % 2 == 0) return digit + resta;
    return resta;
}

int main() {
    int n;
    while (cin >> n) {
        cout << suma_parells(n) << endl;
    }
}
