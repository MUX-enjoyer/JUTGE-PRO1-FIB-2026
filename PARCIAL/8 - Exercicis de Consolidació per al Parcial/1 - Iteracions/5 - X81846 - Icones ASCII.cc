#include <iostream>

using namespace std;

// PRE: p o q tenen almenys un bit a 1
// POST: Retorna la posició del bit menys significatiu amb 1 en p o q
int trobarLSB(int p, int q) {
    int pos = 0;
    while ((p % 2 == 0) && (q % 2 == 0)) {
        p /= 2;
        q /= 2;
        pos++;
    }
    return pos;
}

void imprimirFila(int p, int q) {
    if (p == 0 && q == 0) {
        cout << endl;
        return;
    }

    int lsb = trobarLSB(p, q);
    
    int div = 1;
    for (int i = 0; i < 19; i++) div *= 2;

    for (int i = 19; i >= lsb; i--) {
        if ((p / div) % 2 == 1) cout << '#';
        else if ((q / div) % 2 == 1) cout << '.';
        else cout << ' ';
        div /= 2;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int icona = 0; icona < n; icona++) {
        for (int fila = 0; fila < 20; fila++) {
            int p, q;
            cin >> p >> q;
            imprimirFila(p, q);
        }
        cout << endl;
    }
}