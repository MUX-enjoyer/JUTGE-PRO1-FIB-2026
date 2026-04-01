#include <iostream>

using namespace std;

// PRE: n1, n2, obj son enters llegits de l'entrada.
// POST: retorna true si obj es exactament el promig arithmetic de n1 i n2.
//       El promig s'enten com (n1 + n2) / 2 i cal que sigui un valor enter exacte.
bool esPromig(int n1, int n2, int obj) {
    int suma = n1 + n2;

    if (suma % 2 != 0) return false;  // promig no es enter

    // Podem evitar aquest ultim if si fem:
    // if (suma == obj*2) d'aquesta manera si es decimal
    // no sera igual a obj*2 i retornara false.

    if (suma / 2 == obj) return true;
    else return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (esPromig(a, b, c)) cout << "YES" << endl;
    else if (esPromig(a, c, b)) cout << "YES" << endl;
    else if (esPromig(b, c, a)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
