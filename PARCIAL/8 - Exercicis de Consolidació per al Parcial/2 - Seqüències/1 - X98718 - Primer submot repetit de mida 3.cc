#include <iostream>
using namespace std;

// Faig les variables globals per poder modificar-les a la funció
// sense haver de passar-les com a paràmetres
int aaa, aab, aba, abb, baa, bab, bba, bbb;

// PRE: c3, c2 i c1 son 'a' o 'b'
// POST: Incrementa el comptador corresponent a la combinació de caràcters c3, c2 i c1
void comprovar_combinacions(char c3, char c2, char c1) {
    // Comprovem les combinacions possibles
    if (c3 == 'a' && c2 == 'a' && c1 == 'a') ++aaa;
    else if (c3 == 'a' && c2 == 'a' && c1 == 'b') ++aab;
    else if (c3 == 'a' && c2 == 'b' && c1 == 'a') ++aba;
    else if (c3 == 'a' && c2 == 'b' && c1 == 'b') ++abb;
    else if (c3 == 'b' && c2 == 'a' && c1 == 'a') ++baa;
    else if (c3 == 'b' && c2 == 'a' && c1 == 'b') ++bab;
    else if (c3 == 'b' && c2 == 'b' && c1 == 'a') ++bba;
    else if (c3 == 'b' && c2 == 'b' && c1 == 'b') ++bbb;
}

int main() {
    char c3, c2, c1;
    aaa = aab = aba = abb = baa = bab = bba = bbb = 0;

    // Faig la primera iteració 'espacial' fora del bucle
    cin >> c3 >> c2 >> c1;
    comprovar_combinacions(c3, c2, c1);
    c3 = c2;
    c2 = c1;

    int pos = 1;
    bool trobat = false;
    while (!trobat && cin >> c1 && c1 != '.') {
        comprovar_combinacions(c3, c2, c1);
        
        if (aaa > 1 || aab > 1 || aba > 1 || abb > 1 || baa > 1 || bab > 1 || bba > 1 || bbb > 1) {
            trobat = true;
        }
        else {
            // Desplçem els caràcters
            c3 = c2;
            c2 = c1;
            pos++;
        }
    }

    if (trobat) cout << c3 << c2 << c1 << " " << pos << endl;
    // No cal perque el programa ens garanteix que no hi haura cap submot repetit de mida 3,
    // pero ho deixo perquè veieu l'estructura
    else cout << "No hi ha cap submot repetit de mida 3." << endl;
}