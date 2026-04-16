#include <iostream>
using namespace std;

int main() {
    int primer, h;
    cin >> primer;

    // Determinar amplada w amb el primer esglao
    int w = 1;
    while (cin >> h && h == primer) ++w;

    bool escala_ok;
    if (!cin) {
        escala_ok = false; // Tot iguals = un sol esglao
    } else {
        int D = h - primer;
        int h_actual = h;
        escala_ok = true;

        // Verificar la resta del segon esglao
        for (int i = 1; i < w && escala_ok; ++i) {
            if (!(cin >> h) || h != h_actual) escala_ok = false;
        }

        // Verificar els esglaons restants
        while (escala_ok && (cin >> h)) {
            int h_nou = h;
            if (h_nou - h_actual != D) escala_ok = false;
            else {
                h_actual = h_nou;
                for (int i = 1; i < w && escala_ok; ++i) {
                    if (!(cin >> h) || h != h_actual) escala_ok = false;
                }
            }
        }
    }

    if (escala_ok) cout << "si" << endl;
    else cout << "no" << endl;
}