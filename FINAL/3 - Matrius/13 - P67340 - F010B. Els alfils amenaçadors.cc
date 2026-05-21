#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

void diagonals(Matriu& m, int x_ini, int y_ini, int dir_x, int dir_y) {
    int f = m.size();
    int c = m[0].size();
    bool trobat = false;
    int x = x_ini + dir_x;
    int y = y_ini + dir_y;

    while (!trobat and x >= 0 and y >= 0 and x < f and y < c) {
        if (m[x][y] == 'X') {
            // Imprimim les dues direccions alhora
            cout << '(' << x_ini+1 << ',' << y_ini+1 << ")<->(" << x+1 << ',' << y+1 << ")\n";
            cout << '(' << x+1    << ',' << y+1    << ")<->(" << x_ini+1 << ',' << y_ini+1 << ")\n";
            trobat = true;
        }
        else {
            x += dir_x;
            y += dir_y;
        }
    }
}

int main() {
    int f, c;
    cin >> f >> c;

    Matriu m(f, vector<char>(c));
    for (int i = 0; i < f; ++i)
        for (int j = 0; j < c; ++j)
            cin >> m[i][j];

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (m[i][j] == 'X') {
                diagonals(m, i, j,  1,  1);
                diagonals(m, i, j,  1, -1);
                diagonals(m, i, j, -1,  1);
                diagonals(m, i, j, -1, -1);
                m[i][j] = '.'; // Eliminem l'alfil: les crides mútues ja estan fetes
            }
        }
    }
}