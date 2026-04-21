#include <iostream>
using namespace std;

void girar_ordre() {
    // Cas base: Aquí el cas base seria
    // que no hi hagi cin --> no fer res

    // Cas recursiu
    string paraula;
    if (cin >> paraula) {
        girar_ordre();
        cout << paraula << endl;
    }
}

int main() {
    girar_ordre();
}