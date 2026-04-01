#include <iostream>
using namespace std;

// PRE: nombre enter positiu
// POST: retorna el nombre invertit de n
int nombre_invertit(int n) {
    int invertit = 0;
    while (n > 0) {
        invertit = invertit * 10 + n % 10;
        n /= 10;
    }
    return invertit;
}

int main() {
    int n;
    bool trobat = false;
    while (!trobat && cin >> n) {
        if (n > 100 && n == nombre_invertit(n)) {
            trobat = true;
        }
    }

    if (trobat) cout << n << "!" << endl;
    else cout << "Res." << endl;
}