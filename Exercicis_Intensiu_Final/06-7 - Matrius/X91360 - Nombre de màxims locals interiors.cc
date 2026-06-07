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

bool comprovar_numeros_voltant_menors(Matriu &m, int i, int j) {
    int num = m[i][j];
    
    if (num <= m[i-1][j-1]) return false;
    if (num <= m[i-1][j]) return false;
    if (num <= m[i-1][j+1]) return false;
    if (num <= m[i][j-1]) return false;
    if (num <= m[i][j+1]) return false;
    if (num <= m[i+1][j-1]) return false;
    if (num <= m[i+1][j]) return false;
    if (num <= m[i+1][j+1]) return false;

    return true;
}

int main() {
    int f, c;
    while(cin >> f >> c) {
        Matriu m(f, vector<int>(c));
        llegir_matriu(m);

        int cont = 0;
        for (int i = 1; i < f-1; ++i) {
            for (int j = 1; j < c-1; ++j) {
                if (comprovar_numeros_voltant_menors(m, i, j)) ++cont;
            }
        }
        cout << cont << endl;
    }
}