#include <iostream>
using namespace std;

/*
 * Torna el canvi de x en monedes de 25, 5, 2 i 1 euros.
 * El canvi cal que contingui les monedes més grans possibles.
 * Només una solució recursiva.
 */
void canvi(int x) {
    // Cas base: si x és 0, hem acabat
    if (x == 0) return;

    // Cas recursiu: intentem restar les monedes més grans possibles
    if (x - 25 >= 0) {
        canvi(x - 25);
        cout << "25 ";
    }
    else if (x - 5 >= 0) {
        cout << "5 ";
        canvi(x - 5);
    }
    else if (x - 2 >= 0) {
        cout << "2 ";
        canvi(x - 2);
    }
    else if (x - 1 >= 0) {
        cout << "1 ";
        canvi(x - 1);
    }
}

int main() {
    int x;
    while (cin >> x) {
        cout << x << ": ";
        canvi(x);
        cout << endl;
    }
}