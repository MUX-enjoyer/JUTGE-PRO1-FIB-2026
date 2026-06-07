
#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;


/*
 * PRE: m una matriu N x N i 0 <= x < N/2 + (N mod 2).
 * POST: Torna la suma dels elements del marc x d'M.
 */
int sumaMarc(const Matriu& m, int x) {
    int suma = 0, size = m.size();
    if (x*2 + 1 == size) return m[x][x];
    for (int j = x; j < size - x; ++j) {
        suma = suma + m[x][j] + m[size - 1 - x][j];
    }
    for (int i = x + 1; i < size - 1 - x; ++i) {
        suma = suma + m[i][x] + m[i][size - 1 - x];
    }
    return suma;
}
