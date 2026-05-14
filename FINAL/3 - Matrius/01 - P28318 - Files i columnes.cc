using namespace std;
#include <iostream>
#include <vector>

typedef vector<vector<int>> Matriu;

void llegir_matriu(Matriu& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

int main() {
    int f, c;
    cin >> f >> c;
    vector<vector<int>> m(f, vector<int>(c));
    llegir_matriu(m);
    
    string comanda;
    while (cin >> comanda) {
        int x, y;
        if (comanda == "element") {
            cin >> x >> y;
            cout << "element " << x << " " << y << ": " << m[x-1][y-1] << endl;
        }
        else if (comanda == "fila") {
            cin >> x;
            cout << "fila " << x << ":";
            for (int j = 0; j < c; ++j) {
                cout << " " << m[x-1][j];
            }
            cout << endl;
        }
        else { // comanda == "columna"
            cin >> y;
            cout << "columna " << y << ":";
            for (int i = 0; i < f; ++i) {
                cout << " " << m[i][y-1];
            }
            cout << endl;
        }
    }

}