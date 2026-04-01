#include <iostream>

using namespace std;

int longitud_num(int n) {
    int cont = 0;
    while (n > 0) {
        cont++;
        n /= 10;
    }
    return cont;
}

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        int pos = 1;
        int num_digits = longitud_num(n);

        for (int i = 0; i < num_digits; i++) {
            int d = n % 10;  // Obtenim el dígit més a la dreta

            // Si es parell, l'incrementem en 1
            if (d % 2 == 0) d++;

            sum += d * pos;
            pos *= 10;       // Incrementem la posició per al següent dígit
            n /= 10;         // Eliminem el dígit més a la dreta
        }

        cout << sum << endl;
    }
}
