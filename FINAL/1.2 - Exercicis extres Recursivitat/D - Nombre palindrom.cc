/*
D) Nombre palíndrom:
Feu una funció recursiva bool es_palindrom(int n) que digui si un nombre
natural n és palíndrom (es llegeix igual d'esquerra a dreta que de dreta a esquerra).
* es_palindrom(7)      → true
* es_palindrom(12321)  → true
* es_palindrom(123321) → true
* es_palindrom(1234)   → false
*/
#include <iostream>
using namespace std;

int potencia(int n, int k) {
    if (k == 0) return 1;
    return n * potencia(n, k - 1);
}

int num_digits(int n) {
    if (n < 10) return 1;
    return 1 + num_digits(n / 10);
}

bool es_palindrom(int n, int mida) {
    if (mida <= 1) return true;
    int primer = n / potencia(10, mida - 1);
    int ultim  = n % 10;
    if (primer != ultim) return false;
    int sense_ambdos = (n % potencia(10, mida - 1)) / 10;
    return es_palindrom(sense_ambdos, mida - 2);
}

int main() {
    int n;
    while (cin >> n) {
        cout << es_palindrom(n, num_digits(n)) << endl;
    }
}
