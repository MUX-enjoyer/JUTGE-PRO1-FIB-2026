#include <iostream>
using namespace std;
#include <string>

// Uso n per saber quantes paraules em queden
void girar_ordre(int& n) {
    string paraula;
    if (cin >> paraula) {
        girar_ordre(n);

        // Si encara em queden paraules per imprimir, imprimo la paraula actual i decremento n
        if (n > 0) {
            cout << paraula << endl;
            --n;
        }
    }
}

int main() {
    int x;
    cin >> x;
    girar_ordre(x);
}