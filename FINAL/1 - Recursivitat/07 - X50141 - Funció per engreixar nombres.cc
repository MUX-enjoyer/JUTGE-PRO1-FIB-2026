#include <iostream>
using namespace std;

int engreixa(int x) {
    // Cas base: si x és un dígit
    if (x < 10) return x;
    // Cas recursiu
    int n = engreixa(x/10);
    int digit = x % 10;
    int max = n % 10;

    // Si el digit actual és més petit que el màxim, el substituïm pel màxim
    if (max > digit) n = n*10 + max;
    // Sino afegim el dígit actual
    else n = n*10 + digit;

    return n;
}

int main() {
    int x;
    while (cin >> x) {
        cout << engreixa(x) << endl;
    }
}