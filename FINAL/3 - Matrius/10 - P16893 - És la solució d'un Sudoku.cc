#include <iostream>
using namespace std;
#include <vector>

typedef vector<vector<int>> matriu_INT;

// Pre: m és una matriu buida
// Post: m conté els valors llegits de l'entrada
void llegir_matriu(matriu_INT& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

// Pre: m és una matriu d'un sudoku
// Post: mira si la submatriu de 3x3 que comença a (i_ini, j_ini) és vàlida
bool submatriu_valida(const matriu_INT& m, int i_ini, int j_ini) {
    vector<int> freq(10, 0);

    for (int i = i_ini; i < i_ini + 3; ++i) {
        for (int j = j_ini; j < j_ini + 3; ++j) {
            int num = m[i][j];
            ++freq[num];
            if (freq[num] > 1) return false;
        }
    }
    return true;
}


// Pr:e m és un sudoku de 9x9
bool validar_sudoku(const matriu_INT& s) {

    // Miro per files
    for (int i = 0; i < s.size(); ++i) {
        // Creo vector de freqüències
        vector<int> freq(10, 0);
        
        // Recorro la fila comptant frequencies
        for (int j = 0; j < s[0].size(); ++j) {
            int num = s[i][j];
            freq[num]++;

            // Reviso que sigui el primer cop que surt
            if (freq[num] > 1) return false;
        }
    }

    // Mirar columnes
        for (int j = 0; j < s[0].size(); ++j) {
        // Creo vector de freqüències
        vector<int> freq(10, 0);
        
        // Recorro la columna comptant frequencies
        for (int i = 0; i < s.size(); ++i) {
            int num = s[i][j];
            freq[num]++;

            // Reviso que sigui el primer cop que surt
            if (freq[num] > 1) return false;
        }
    }

    // Mirar subquadrats
    for (int i = 0; i < 9; i +=3 ) {
        for (int j = 0; j < 9; j += 3) {
            if (!submatriu_valida(s, i, j)) return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        
        matriu_INT s(9, vector<int>(9));
        llegir_matriu(s);

        if (validar_sudoku(s)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}