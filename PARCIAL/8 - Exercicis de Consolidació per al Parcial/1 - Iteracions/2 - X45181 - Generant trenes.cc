#include <iostream>
using namespace std;

void imprimir_caracters(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

int main() {
    int llargada, gruix, amplada;
    while(cin >> llargada >> gruix >> amplada) {

        bool pujant = true;
        int num_espais = 0;

        for (int i = 0; i < llargada; i++) {
            // if (pujant) imprimir_espais(i % amplada);
            // else imprimir_espais(amplada - (i % amplada) - 1);

            imprimir_caracters(num_espais, ' ');
            imprimir_caracters(gruix, '*');
            cout << endl;

            if (pujant) num_espais++;
            else num_espais--;

            if (pujant && num_espais == amplada) pujant = false;
            else if (!pujant && num_espais == 0) pujant = true;
        }

        cout << endl;
    }
}