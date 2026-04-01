#include <iostream>
using namespace std;

struct Tobogan {
    int pos_inicial;
    int pendent;
    int longitud;
};

// PRE: tobogan_actual representa un tobogan que acaba a la posició actual
// POST: actualitza tobogan_mes_llarg i tobogan_descendent_mes_llarg si
//       tobogan_actual és més llarg que els actuals
void actualitzar_tobogan(const Tobogan& tobogan_actual, Tobogan& tobogan_mes_llarg, Tobogan& tobogan_descendent_mes_llarg) {
    if (tobogan_actual.longitud > 3) { // Considerem només tobogans de longitud superior a 3
        if (tobogan_actual.pendent > 0 && tobogan_actual.longitud > tobogan_mes_llarg.longitud) {
            tobogan_mes_llarg = tobogan_actual;
        }
        else if (tobogan_actual.pendent < 0 && tobogan_actual.longitud > tobogan_descendent_mes_llarg.longitud) {
            tobogan_descendent_mes_llarg = tobogan_actual;
        }
    }
}

int main() {
    Tobogan tobogan_ascendent_mes_llarg = {0, 0, 0};
    Tobogan tobogan_descendent_mes_llarg = {0, 0, 0};

    Tobogan tobogan_actual = {0, 0, 0};

    int actual;
    int anterior;
    cin >> anterior;

    int pos = 1;
    int d;
    while (cin >> actual) {
        int d = actual - anterior;
        if (d == tobogan_actual.pendent) {
            // Mateix tobogan
            tobogan_actual.longitud++;
        }
        else {
            // Finalitzar tobogan actual
            actualitzar_tobogan(tobogan_actual, tobogan_ascendent_mes_llarg, tobogan_descendent_mes_llarg);

            // Començar nou tobogan
            if (d != 0) tobogan_actual = {pos, d, 2}; // Comença amb longitud 2 (anterior + actual)
        }

        anterior = actual;
        pos++;
    }

    actualitzar_tobogan(tobogan_actual, tobogan_ascendent_mes_llarg, tobogan_descendent_mes_llarg);

    if (tobogan_ascendent_mes_llarg.longitud > 0) {
        cout << "/ " << tobogan_ascendent_mes_llarg.pos_inicial << ":" << tobogan_ascendent_mes_llarg.pendent << ":";
        cout << tobogan_ascendent_mes_llarg.longitud << endl;
    }
    if (tobogan_descendent_mes_llarg.longitud > 0) {
        cout << "\\ " << tobogan_descendent_mes_llarg.pos_inicial << ":" << tobogan_descendent_mes_llarg.pendent << ":";
        cout << tobogan_descendent_mes_llarg.longitud << endl;
    }
}