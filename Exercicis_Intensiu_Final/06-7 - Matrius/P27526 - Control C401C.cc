#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

// Pre rebem una matriu m buida
// Post la matriu m queda plena de valors
void llegir_matriu(Matriu & m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

// Pre: rebem una matriu m
// Post: s'imprimeix la matriu m
void imprimir_matriu(Matriu & m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            if (j>0) cout << " ";
            cout << m[i][j];
        }
        cout << endl;
    }

    cout << "-----" << endl;
}

// Pre: j i k són > 0 i  < m[0].size()
// Post: S'intercanvien les columnes j i k de la matriu m
void intercanviar(Matriu & m, int j, int k) {
    for (int i = 0; i < m.size(); ++i) {
        swap(m[i][j], m[i][k]);
    }
}

int main() {
    int f, c;
    cin >> f >> c;
    Matriu matriu(f, vector<int>(c));
    llegir_matriu(matriu);

    cout << "-----" << endl;
    imprimir_matriu(matriu);

    int j, k;
    while (cin >> j >> k) {
        intercanviar(matriu, j, k);
        imprimir_matriu(matriu);
    }
}