#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matriu;

// Omple la matriu des de l'entrada 
void llegir_matriu(Matriu& sopa) {
    int f = sopa.size();
    int c = sopa[0].size();
    for (int i = 0; i < f; ++i)
        for (int j = 0; j < c; ++j)
            cin >> sopa[i][j];
}

// Imprimeix la matriu per pantalla
void escriure_matriu(const Matriu& sopa) {
    int f = sopa.size();
    int c = sopa[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j > 0) cout << ' ';
            cout << sopa[i][j];
        }
        cout << endl;
    }
}

// Retorna cert si lletra_sopa coincideix amb lletra_paraula,
// independentment de si són majúscules o minúscules.
bool mateixa_lletra(char lletra_sopa, char lletra_paraula) {
    if (lletra_sopa == lletra_paraula) return true;
    else if (lletra_sopa == lletra_paraula - 'a' + 'A') return true;
    return false;
}

// Busca si paraula apareix a sopa començant a (i, j) en la direcció HORITZONTAL,
// si apareix, posa les lletres de la sopa en majúscula
void buscar_horitzontal(Matriu& sopa, string paraula, int i, int j) {
    int n = paraula.size();
    int c = sopa[0].size();

    // Si la paraula sobrepassa la última columna, no cal seguir comprovant
    if (j + n > c) return;
    
    // Comprovo si coincideixen les lletres de la sopa amb les de la paraula
    // Avanço per la sopa i la paraula al mateix temps
    for (int k = 0; k < n; ++k) {
        // Si alguna lletra no coincideix, no cal seguir comprovant
        if (!mateixa_lletra(sopa[i][j+k], paraula[k])) {
            return;
        }
    }

    // Si hem arribat aquí, és que la paraula coincideix amb la sopa
    // per tant posem les lletres de la sopa en majúscula
    for (int k = 0; k < n; ++k) {
        sopa[i][j+k] = paraula[k] - 'a' + 'A';
    }
}

// Busca si paraula apareix a sopa començant a (i, j) en la direcció VERTICAL,
// si apareix, posa les lletres de la sopa en majúscula
void buscar_vertical(Matriu& sopa, string paraula, int i, int j) {
    int n = paraula.size();
    int f = sopa.size();

    // Si la paraula sobrepassa l'última fila, no cal seguir comprovant
    if (i + n > f) return;

    // Comprovo si coincideixen les lletres de la sopa amb les de la paraula
    // Avanço per la sopa i la paraula al mateix temps
    for (int k = 0; k < n; ++k) {
        // Si alguna lletra no coincideix, no cal seguir comprovant
        if (!mateixa_lletra(sopa[i+k][j], paraula[k])) {
            return;
        }
    }

    // Si hem arribat aquí, és que la paraula coincideix amb la sopa
    // per tant posem les lletres de la sopa en majúscula
    for (int k = 0; k < n; ++k) {
        sopa[i+k][j] = paraula[k] - 'a' + 'A';
    }
}

// Busca si paraula apareix a sopa començant a (i, j) en la direcció DIAGONAL
// si apareix, posa les lletres de la sopa en majúscula
void buscar_diagonal(Matriu& sopa, string paraula, int i, int j) {
    int n = paraula.size();
    int f = sopa.size();
    int c = sopa[0].size();

    // Si la paraula sobrepassa l'última fila o l'última columna, no cal seguir comprovant
    if (i + n > f or j + n > c) return;

    // Comprovo si coincideixen les lletres de la sopa amb les de la paraula
    // Avanço per la sopa i la paraula al mateix temps augmentant tant la fila com la columna
    for (int k = 0; k < n; ++k) {
        // Si alguna lletra no coincideix, no cal seguir comprovant
        if (!mateixa_lletra(sopa[i+k][j+k], paraula[k])) {
            return;
        }
    }

    // Si hem arribat aquí, és que la paraula coincideix amb la sopa
    // per tant posem les lletres de la sopa en majúscula
    for (int k = 0; k < n; ++k) {
        sopa[i+k][j+k] = paraula[k] - 'a' + 'A';
    }
}

// --- Programa principal ---

int main() {
    int x, f, c;
    bool primer = true;
    while (cin >> x >> f >> c) {
        if (not primer) cout << endl;
        primer = false;

        vector<string> paraules(x);
        for (int i = 0; i < x; ++i) cin >> paraules[i];

        Matriu sopa(f, vector<char>(c));
        llegir_matriu(sopa);

        // Per cada posició de la sopa i cada paraula, provem les tres direccions.
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                for (int k = 0; k < x; ++k) {
                    buscar_horitzontal(sopa, paraules[k], i, j);
                    buscar_vertical(sopa, paraules[k], i, j);
                    buscar_diagonal(sopa, paraules[k], i, j);
                }
            }
        }

        escriure_matriu(sopa);
    }
}