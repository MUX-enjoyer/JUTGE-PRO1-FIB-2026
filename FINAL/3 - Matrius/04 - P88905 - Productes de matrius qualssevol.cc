#include <iostream>
using namespace std;
#include <vector>

typedef vector< vector<int> > Matriu;

// Pre: les matrius a i b són compatibles per a multiplicar-les
// és a dir, el nombre de columnes de a és igual al nombre de files de b
Matriu producte(const Matriu& a, const Matriu& b) {
    int nfiles_a = a.size();
    int ncolumnes_a = a[0].size();
    int nfiles_b = b.size();
    int ncolumnes_b = b[0].size();

    // Sabem que ncolumnes_a == nfiles_b, així que podem crear la matriu resultat
    Matriu res(nfiles_a, vector<int>(ncolumnes_b, 0) );

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[0].size(); j++) {

            for (int k = 0; k < ncolumnes_a; ++k) {
                res[i][j] += a[i][k] * b[k][j];
            }

        }
    }

    return res;
}


Matriu in_matriu() {
    int f, c;
    cin >> f >> c;
    Matriu m(f, vector<int>(c) );
    
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> m[i][k];
        }
    }
    return m;
}

void out_matriu(Matriu m) {
    int f = m.size();
    int c = m[0].size();

    for (int i = 0; i < f; ++i) {
        cout << m[i][0];
        for (int k = 1; k < c; ++k) {
            cout << ' ' << m[i][k];
        }
        cout << endl;
    }
}

int main () {
    Matriu a = in_matriu();
    Matriu b = in_matriu();

    Matriu c = producte(a, b);

    out_matriu(c);
}