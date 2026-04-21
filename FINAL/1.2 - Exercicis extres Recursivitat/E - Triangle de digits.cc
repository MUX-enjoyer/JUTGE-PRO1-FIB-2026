/*
E) Triangle de dígits:
Dissenyeu un procediment recursiu que, donat un natural n, imprimeixi una figura com la següent.
Si n = 3:
1
12
123
12
1
Pista: Pensa en què s'ha d'imprimir abans de la crida recursiva i què després.
*/
#include <iostream>
using namespace std;

void imprimeix_fila(int k) {
    for (int i = 1; i <= k; ++i) cout << i;
    cout << endl;
}

void triangle(int current, int n) {
    imprimeix_fila(current);
    if (current < n) triangle(current + 1, n);
    if (current > 1) imprimeix_fila(current - 1);
}

int main() {
    int n;
    while (cin >> n) {
        triangle(1, n);
    }
}
