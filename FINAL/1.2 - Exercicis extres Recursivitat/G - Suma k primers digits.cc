/*
G) Suma k primers dígits:
Dissenyeu una funció recursiva que, donat un nombre natural n i un enter k,
sumi només els k dígits de més a l'esquerra del nombre.
int suma_k_primers(int n, int k)
* suma_k_primers(123456, 3) → 6 (1+2+3)
* suma_k_primers(987, 1)    → 9
*/
#include <iostream>
using namespace std;

// Processa els dígits d'esquerra a dreta
// utilitzant `k` per referència per saber quants queden per sumar.
int suma_k_primers(int n, int &k) {
    if (n == 0) return 0;
    int sum = suma_k_primers(n / 10, k);
    if (k > 0) {
        sum += n % 10;
        k--;
    }
    return sum;
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        cout << suma_k_primers(n, k) << endl;
    }
}
