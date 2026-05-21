using namespace std;
#include <iostream>
#include <vector>

typedef vector<vector<bool>> Tauler;

void afegir_vaixell(int fila, int columna, int mida, char dir, Tauler& tauler) {
    if (dir == 'h') {
        for (int j = 0; j < mida && columna + j < tauler[fila].size(); ++j) {
            tauler[fila][columna + j] = true;
        }
    }
    else {
        for (int i = 0; i < mida && fila + i < tauler.size(); ++i) {
            tauler[fila + i][columna] = true;
        }
    }
}

void imprimir_tauler(const Tauler& tauler) {
    cout << "  12345678910" << endl;
    for (int i = 0; i < tauler.size(); ++i) {
        char lletra_fila = 'a' + i;
        cout << lletra_fila << ' ';
        for (int j = 0; j < tauler[i].size(); ++j) {
            if (tauler[i][j]) cout << 'X';
            else cout << '.';
        }
        cout << endl;
    }
}

int calc_distancia(int x, int y, const Tauler& tauler) {
    int min_dist = -1;
    for (int i = 0; i < int(tauler.size()); ++i) {
        for (int j = 0; j < int(tauler[i].size()); ++j) {
            if (tauler[i][j]) {
                int d = max(abs(x - i), abs(y - j));
                if (min_dist == -1 || d < min_dist) {
                    min_dist = d;
                }
            }
        }
    }
    return min_dist;
}

int main() {
    Tauler tauler(10, vector<bool>(10, false));

    int vaixells = 10;
    for (int i = 0; i < vaixells; ++i) {
        char char_f, dir;
        int mida, col;
        cin >> char_f >> col >> mida >> dir;
        int fila = char_f - 'a';
        int columna = col - 1;
        afegir_vaixell(fila, columna, mida, dir, tauler);
    }

    imprimir_tauler(tauler);
    cout << endl;

    char char_x;
    int col_y;
    while (cin >> char_x >> col_y) {
        int x = char_x - 'a';
        int y = col_y - 1;
        if (tauler[x][y]) cout << char_x << col_y << " tocat!" << endl;
        else {
            cout << char_x << col_y << " aigua! ";
            cout <<  "vaixell mes proper a distancia ";
            cout << calc_distancia(x, y, tauler) << endl;
        }
    }
}