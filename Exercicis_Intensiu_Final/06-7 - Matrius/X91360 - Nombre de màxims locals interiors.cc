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

bool comprovar_numeros_voltant_menors(Matriu &m, int centre_i, int centre_j) {
    int num = m[centre_i][centre_j];

    for (int i = centre_i-1; i < centre_i+2; ++i) {
        for (int j = centre_j-1; j < centre_j+2; ++j) {
            if (i != centre_i && j != centre_j && m[i][j] >= num) {
                return false;
            }
        }
    }

    return true;


    ///////////////////////
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