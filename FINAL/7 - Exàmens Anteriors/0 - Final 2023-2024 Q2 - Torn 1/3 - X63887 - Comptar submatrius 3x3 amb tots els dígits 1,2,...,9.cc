#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

void llegir_matriu(Matriu & m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

bool comprovar_submatriu_te_tots_els_digits(Matriu &m, int ini_i, int ini_j) {
    vector<bool> digits(10, false);

    for (int i = ini_i; i < ini_i+3 && i < m.size(); ++i) {
        for (int j = ini_j; j < ini_j+3 && j < m[i].size(); ++j) {
            int num = m[i][j];
            digits[num] = true;
        }
    }

    for (int i = 1; i <= 9; ++i) {
        if (!digits[i]) return false;
    }
    return true;
}

int main() {
    int f, c;
    while(cin >> f >> c) {
        Matriu m(f, vector<int>(c));
        llegir_matriu(m);

        int cont = 0;
        for (int i = 0; i < f-2; ++i) {
            for (int j = 0; j < c-2; ++j) {
                if (comprovar_submatriu_te_tots_els_digits(m, i, j)) ++cont;
            }
        }
        cout << cont << endl;
    }
}