#include <iostream>
using namespace std;
#include <string>

// Funció recursiva que llegeix paraules i imprimeix la primera meitat en ordre invers
void girar_ordre(int n, int& num_total) {
    string paraula;
    if (cin >> paraula) {
        ++num_total;  // Incrementa el comptador de paraules llegides
        
        girar_ordre(n + 1, num_total);  // Crida recursiva per llegir la següent paraula

        if (n < num_total/2) {
            cout << paraula << endl;  // Imprimeix la paraula si estem a la primera meitat
        }
    }
}

int main() {
    int n, num_total;  // n: comptador total, num_total: comptador de paraules llegides
    n = num_total = 0;  // Inicialitza els comptadors a 0
    girar_ordre(n, num_total);  // Crida la funció recursiva
}