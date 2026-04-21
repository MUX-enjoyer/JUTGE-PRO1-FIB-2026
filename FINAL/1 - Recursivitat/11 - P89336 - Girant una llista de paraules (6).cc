#include <iostream>
using namespace std;
#include <string>

// Funció recursiva que llegeix paraules i imprimeix la primera meitat en ordre invers
void girar_ordre(int& n, int& n_par) {
    string paraula;
    if (cin >> paraula) {
        ++n_par;  // Incrementa el comptador de paraules llegides
        girar_ordre(n, n_par);  // Crida recursiva per llegir la següent paraula
        
        // Imprimeix la paraula si pertany a la primera meitat (en ordre invers)
        if (n*2 > n_par - 1) { 
            cout << paraula << endl;
        }
        ++n;  // Incrementa el comptador total de paraules després de la recursió
    }
}

int main() {
    int n, n_par;  // n: comptador total, n_par: comptador de paraules llegides
    n = n_par = 0;  // Inicialitza els comptadors a 0
    girar_ordre(n, n_par);  // Crida la funció recursiva
}