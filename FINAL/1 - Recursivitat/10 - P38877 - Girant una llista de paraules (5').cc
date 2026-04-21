#include <iostream>
using namespace std;
#include <string>

// Uso n per saber quantes paraules em queden
void girar_ordre(int n) {
    if (n == 0) return; // Cas base: si no em queden paraules per imprimir, retornem

    string paraula;
    if (cin >> paraula) {
        girar_ordre(n - 1);
        cout << paraula << endl;
    }
}

int main() {
    int x;
    cin >> x;
    girar_ordre(x);
}