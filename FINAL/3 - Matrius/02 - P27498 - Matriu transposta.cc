#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

void transposa(Matriu& M) {
    int n = M.size();
    for (int i = 0; i < n; ++i) {
        // Només cal intercanviar els elements per sobre
        // de la diagonal principal
        for (int j = i + 1; j < n; ++j) {
            swap(M[i][j], M[j][i]);
        }
    }
}

void transposa2(Matriu& M) {
    // Alternativa pitjor: crear una nova matriu i copiar els elements
    Matriu T(M.size(), vector<int>(M[0].size()));
    for (int i = 0; i < M.size(); ++i) {
        for (int j = 0; j < M[0].size(); j++) {
            T[j][i] = M[i][j];
        }
    }

    M = T;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<vector<int>> M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }
        transposa(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
