/*
C) Calcular una potència:
Dissenyeu una funció recursiva potencia(int n, int k) que calculi n^k
(on n i k són enters no negatius). Recordeu que n^0 = 1!
* potencia(2, 3) → 8
* potencia(5, 0) → 1
*/
#include <iostream>
using namespace std;

int potencia(int n, int k) {
    if (k == 0) return 1;
    return n * potencia(n, k - 1);
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        cout << potencia(n, k) << endl;
    }
}
