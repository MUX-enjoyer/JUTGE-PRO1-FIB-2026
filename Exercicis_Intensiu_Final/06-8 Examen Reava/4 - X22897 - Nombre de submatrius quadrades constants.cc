#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

bool es_constant(Matriu m, int ini_i, int ini_j, int n) {
    for (int i = ini_i; i < ini_i + n; i++) {
        for (int j = ini_j; j < ini_j + n; j++) {
            if (m[i][j] != m[ini_i][ini_j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matriu m(f, vector<int>(c));
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                cin >> m[i][j];
            }
        }

        for (int n = 1; n <= f && n <= c; n++) {
            int cont = 0;
            for (int i = 0; i < f - (n - 1); i++) {
                for (int j = 0; j < c - (n - 1); ++j) {
                    if (es_constant(m, i, j, n)) {
                        cont++;
                    }
                }
            }
            cout << cont << endl;
        }
    }
}