#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<vector<char>> Matriu;
typedef vector<vector<int>>  Matriu_valors;

// Omple la matriu de lletres des de l'entrada
void llegir_lletres(Matriu& sopa) {
    int f = sopa.size();
    int c = sopa[0].size();
    for (int i = 0; i < f; ++i)
        for (int j = 0; j < c; ++j)
            cin >> sopa[i][j];
}

// Omple la matriu de valors des de l'entrada
void llegir_valors(Matriu_valors& valors) {
    int f = valors.size();
    int c = valors[0].size();
    for (int i = 0; i < f; ++i)
        for (int j = 0; j < c; ++j)
            cin >> valors[i][j];
}

// Retorna la puntuació de paraula si apareix HORITZONTALMENT començant a (i, j).
// Si la paraula no hi cap o alguna lletra no coincideix, retorna -1.
int puntuacio_horitzontal(const Matriu& sopa, const Matriu_valors& valors,
                          string paraula, int i, int j) {
    int n = paraula.size();
    int c = sopa[0].size();

    // Si la paraula sobrepassa l'última columna, no hi cap
    if (j + n > c) return -1;

    // Comprovo si coincideixen les lletres de la sopa amb les de la paraula
    // Avanço per la sopa i la paraula al mateix temps
    for (int k = 0; k < n; ++k) {
        // Si alguna lletra no coincideix, aquesta col·locació no és vàlida
        if (sopa[i][j+k] != paraula[k]) return -1;
    }

    // Si hem arribat aquí, la paraula coincideix:
    // sumem els valors de les caselles que ocupa
    int suma = 0;
    for (int k = 0; k < n; ++k) {
        suma += valors[i][j+k];
    }
    return suma;
}

// Retorna la puntuació de paraula si apareix VERTICALMENT començant a (i, j).
// Si la paraula no hi cap o alguna lletra no coincideix, retorna -1.
int puntuacio_vertical(const Matriu& sopa, const Matriu_valors& valors,
                       string paraula, int i, int j) {
    int n = paraula.size();
    int f = sopa.size();

    // Si la paraula sobrepassa l'última fila, no hi cap
    if (i + n > f) return -1;

    // Comprovo si coincideixen les lletres de la sopa amb les de la paraula
    for (int k = 0; k < n; ++k) {
        if (sopa[i+k][j] != paraula[k]) return -1;
    }

    // Si coincideix, sumem els valors de les caselles que ocupa
    int suma = 0;
    for (int k = 0; k < n; ++k) {
        suma += valors[i+k][j];
    }
    return suma;
}

// --- Programa principal ---

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matriu sopa(f, vector<char>(c));
        llegir_lletres(sopa);

        Matriu_valors valors(f, vector<int>(c));
        llegir_valors(valors);

        int t;
        cin >> t;
        for (int p = 0; p < t; ++p) {
            string paraula;
            cin >> paraula;

            // Provem la paraula a totes les posicions en les dues direccions
            // i ens quedem amb la millor puntuació trobada
            int maxim = -1;
            for (int i = 0; i < f; ++i) {
                for (int j = 0; j < c; ++j) {
                    int punts_horitzontal = puntuacio_horitzontal(sopa, valors, paraula, i, j);
                    if (punts_horitzontal > maxim) maxim = punts_horitzontal;

                    int punts_vertical = puntuacio_vertical(sopa, valors, paraula, i, j);
                    if (punts_vertical > maxim) maxim = punts_vertical;
                }
            }

            if (maxim == -1) cout << "no" << endl;
            else cout << maxim << endl;
        }
    }
}