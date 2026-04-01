#include <iostream>
using namespace std;

// Pre: num >= 0
// Post: retorna el nombre de dígits de num
int num_digits(int num) {
    if (num == 0) return 1;
    int cont = 0;
    while (num > 0) {
        num /= 10;
        cont++;
    }
    return cont;
}

// PRE: n és un natural positiu.
// POST: Retorna els dígits senars i parells de n per separat.
void extraureDigits(int n, int& senars, int& parells) {
    senars = 0;
    parells = 0;
    int multiplicador_senars = 1;
    int multiplicador_parells = 1;
    
    while (n > 0) {
        int d = n % 10;  // Extreu l'últim dígit
        
        // Si el dígit és senar, l'afegeix al nombre senars
        if (d % 2 == 1) {
            senars = d * multiplicador_senars + senars;
            multiplicador_senars *= 10;
        } 
        // Si el dígit és parell i positiu (exclou 0), l'afegeix al nombre parells
        else if (d > 0) {
            parells = d * multiplicador_parells + parells;
            multiplicador_parells *= 10;
        }
        n /= 10;
    }
}

// PRE: senars i parells són naturals.
// POST: Retorna la concatenació de senars seguit de parells.
int concatenar(int senars, int parells) {
    // Sino hi ha  dígits parells, retorna només els senars
    // Sinó els senars quedarien multiplicats *10
    if (parells == 0) return senars;

    // Desplaça senars cap a l'esquerra multiplicant per 10^(dígits de parells)
    int digits = num_digits(parells);
    for (int i = 0; i < digits; i++) {
        senars *= 10;
    }
    return senars + parells;
}

int main() {
    int x;
    while (cin >> x) {
        int senars, parells;
        extraureDigits(x, senars, parells);
        int y = concatenar(senars, parells);
        cout << y << " " << 2 * y << endl;
    }
}
