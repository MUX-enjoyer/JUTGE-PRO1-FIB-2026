#include <iostream>
using namespace std;

void girar_ordre() {
    string paraula;
    if (cin >> paraula) {
        // Cas base: si la paraula és "fi", retornem
        if (paraula == "fi") {
            return;
        }
        
        // Cas recursiu: llegim la següent paraula abans d'imprimir l'actual
        girar_ordre();
        cout << paraula << endl;
    }
}

int main() {
    girar_ordre();
}