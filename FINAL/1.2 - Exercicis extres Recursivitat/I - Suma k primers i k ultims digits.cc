/*
I) Suma dels k primers i k últims dígits:
Dissenyeu una funció recursiva int suma_extrems(int n, int k) que sumi els k
dígits del principi i els k dígits del final d'un nombre natural n.
* suma_extrems(123456, 2) → 15 (1+2 + 5+6)
* suma_extrems(987, 1)    → 16 (9 + 7)
Pista: Hauràs de controlar la profunditat per saber quan estàs "arribant" als
primers dígits i, en retornar de la recursivitat, comptar quants en portes
per sumar els últims.
*/
#include <iostream>
using namespace std;

int num_digits(int n) {
    if (n < 10) return 1;
    return 1 + num_digits(n / 10);
}

int potencia(int n, int k) {
    if (k == 0) return 1;
    return n * potencia(n, k - 1);
}

// Retorna {suma, dígits pujats}
// En baixar: sumem els k últims (pos des de la dreta = pujats+1)
// En pujar:  sumem els k primers (pos des de l'esquerra = total - pujats)
pair<int,int> aux(int n, int k, int total) {
    if (n == 0) return {0, 0};
    int digit = n % 10;
    auto [suma_rec, pujats] = aux(n / 10, k, total);
    int nova_suma = suma_rec;
    // Posició des de la dreta (en baixar): pujats + 1
    if (pujats + 1 <= k) nova_suma += digit;
    // Posició des de l'esquerra (en pujar): total - pujats
    if (total - pujats <= k) nova_suma += digit;
    return {nova_suma, pujats + 1};
}

int suma_extrems(int n, int k) {
    auto [suma, _] = aux(n, k, num_digits(n));
    return suma;
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        cout << suma_extrems(n, k) << endl;
    }
}
