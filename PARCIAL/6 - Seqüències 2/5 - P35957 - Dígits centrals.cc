#include <iostream>
using namespace std;

// PRE: n és un enter no negatiu
// POST: retorna el nombre de dígits de n
int num_digits(int n) {
    if (n == 0) return 1;
    int n_digits = 0;
    while (n > 0) {
        n /= 10;
        n_digits++;
    }
    return n_digits;
}

// PRE: n té un nombre senar de dígits
// POST: retorna el dígit central de n
int num_central(int n) {
    int n_digits = num_digits(n);
    // Fem divisió entera per 10 per treure els n_digits/2 dígits de la dreta
    for (int i = 0; i < n_digits/2; i++) {
        n /= 10;
    }
    // Retornem el dígit més a la dreta (que és el central)
    return n % 10;
}

int main() {
    int n;
    cin >> n;
    
    char guanyador;

    bool joc_acabat = false;   // Indica si algú ha perdut
    
    int primer_num;
    cin >> primer_num;
    int primer_central = num_central(primer_num); // Guardem el dígit central

    // Processem els 2n nombres alternats (n de l'Anna, n de Bernat)
    // i=0: a1 (Anna), i=1: b1 (Bernat), i=2: a2 (Anna), etc.
    for (int i = 1; i < 2*n && !joc_acabat; ++i) {
        int num;
        cin >> num;
    
        // Si o bé el nombre té un nombre parell de dígits o el dígit central no coincideix amb el primer,
        // aquesta persona perd
        if (num_digits(num) % 2 == 0 || num_central(num) != primer_central) {
            if (i % 2 == 0) guanyador = 'B'; // Anna ha perdut
            else guanyador = 'A'; // Bernat ha perdut
            joc_acabat = true; // Posem joc_acabat a true per sortir del bucle
        }
    }
    
    
    if (joc_acabat) cout << guanyador << endl;
    else cout << "=" << endl; // Si ningú ha perdut després de tots els números, és un empat
}