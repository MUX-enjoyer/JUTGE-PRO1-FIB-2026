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

bool zig_zag_escreixent(Matriu &m) {
    int num_ant = m[0][0];
    bool primer = true;

    // Per columnes
    for (int j = 0; j < m[0].size(); ++j) {

        if (j%2 == 0) {
            // Recorrer de adalt cap abaix
            for (int i = 0; i < m.size(); ++i) {
                if (primer) primer = false;
                else if (m[i][j] <= num_ant) {
                    return false;
                }
                num_ant = m[i][j];
            }
        }
        else {
            // Recorrer de baix cap a dalt
            for (int i = m.size()-1; i >= 0; --i) {
                if (m[i][j] <= num_ant) {
                    return false;
                }
                num_ant = m[i][j];
            }
        }
    }
    
    return true;
}


int main() {
    int f, c;
    int cont = 0;
    while (cin >> f >> c) {
        Matriu matriu(f, vector<int>(c));

        llegir_matriu(matriu);

        ++cont;
        cout << "matriu " << cont;
        if (zig_zag_escreixent(matriu)) cout << ": si" << endl;
        else cout << ": no" << endl;
    }
}