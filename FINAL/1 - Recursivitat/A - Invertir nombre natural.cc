// 1) Invertir un nombre natural:
// Feu una funció void invertir(int n); que imprimeixi el nombre per pantalla invertit
// * invertir(1) --> 1
// * invertir(1234) --> 4321

#include <iostream>
using namespace std;

void invertir(int n) {
    if (n < 10) cout << n;
    else {
        cout << n % 10;
        invertir(n / 10);
    }
}


int main() {
    int n;
    while (cin >> n) {
        invertir(n);
        cout << endl;
    }
}