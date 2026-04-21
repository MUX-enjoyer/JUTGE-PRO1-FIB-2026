#include <iostream>
using namespace std;

void imprimir_digit(int digit) {
    if (digit >= 10) {
        char c = 'A' + (digit - 10);
        cout << c;
    }
    else cout << digit;
}

void imprimir_en_base(int n, int base) {
    // Cas base: si n és menor que la base (1 digit)
    if (n < base) imprimir_digit(n);

    // Cas recursiu:
    else {
        // Primer imprimeixo la part més significativa
        // per tant segueixo fent crides recursives
        imprimir_en_base(n/base, base);

        // Després imprimeixo el dígit actual
        int digit = n%base;
        imprimir_digit(digit);
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        imprimir_en_base(n, 2);
        cout << ", ";
        imprimir_en_base(n, 8);
        cout << ", ";
        imprimir_en_base(n, 16);
        cout << endl;
    }
}