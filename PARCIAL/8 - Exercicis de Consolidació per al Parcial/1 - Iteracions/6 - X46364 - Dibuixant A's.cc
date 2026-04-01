#include <iostream>

using namespace std;

// POST: imprimeix un caràcter c repetit n vegades
void imprimir_caracters(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

// POST: Imprimeix ' ' espai vegades seguits de 'A' ample vegades
// formant una línia de la secció sòlida (capçalera o travesser).
void linia_continua(int espais, int ample) {
    imprimir_caracters(espais, ' ');
    imprimir_caracters(ample, 'A');
    cout << endl;
}

// POST: Imprimeix ' ' espai vegades seguits de 'A' ample vegades
// per despres imprimir ' ' espais_interns vegades i finalment 'A' ample vegades
// formant una línia de la secció foradada (obertura o potes).
void linia_foradada(int espais, int n, int espais_interns) {
    imprimir_caracters(espais, ' ');
    imprimir_caracters(n, 'A');
    imprimir_caracters(espais_interns, ' ');
    imprimir_caracters(n, 'A');
    cout << endl;
}

int main() {
    int n;
    while (cin >> n) {
        // La lletra 'A' es compon de 4 seccions: capçalera, obertura, travesser i potes.
        int linies = n/2 + 1;
        int espais = 4*linies - 1;
        int amplada, forat;

        // Capçalera
        amplada = n;
        for (int i = 0; i < linies; i++) {
            linia_continua(espais, amplada);
            --espais;
            amplada += 2;
        }

        // Obertura
        amplada = n;
        if (n % 2 == 0) forat = 2;
        else forat = 1;
        for (int i = 0; i < linies; i++) {
            linia_foradada(espais, amplada, forat);
            --espais;
            forat += 2;
        }

        // Travesser: costat (n) + forat final obertura + costat (n)
        amplada = n + forat + n;
        for (int i = 0; i < linies; i++) {
            linia_continua(espais, amplada);
            --espais;
            amplada += 2;
        }

        // Potes: forat de l'obertura + creixement del travesser
        forat = amplada - 2*n;
        amplada = n;
        for (int i = 0; i < linies; i++) {
            linia_foradada(espais, amplada, forat);
            --espais;
            forat += 2;
        }

        cout << endl;
    }
}