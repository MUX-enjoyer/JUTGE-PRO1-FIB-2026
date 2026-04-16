#include <iostream>
using namespace std;

void imprimir_en_base(int n, int base) {
    if (n < base) cout << n;
    else {
        imprimir_en_base(n/base, base);

        int digit = n%base;
        if (digit > 10) cout << 'A' + digit-10;
        else cout << n%base;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << "binari: ";
        imprimir_en_base(n, 2);
        imprimir_en_base(n, 2);
        imprimir_en_base(n, 2);
        cout << endl;
    }
}