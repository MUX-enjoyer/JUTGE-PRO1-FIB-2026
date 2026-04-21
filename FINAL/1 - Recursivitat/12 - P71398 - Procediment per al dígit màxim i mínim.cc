#include <iostream>
using namespace std;

void digit_maxim_i_minim(int x, int& maxim, int& minim) {
    // Cas base: si x és un dígit)
    // inicialitzem el màxim i el mínim amb aquest dígit
    if (x < 10) {
        maxim = x;
        minim = x;
    }
    // Cas recursiu
    else {
        digit_maxim_i_minim(x/10, maxim, minim);
        // Si el dígit actual és max o min actualitzem
        if (x % 10 > maxim) maxim = x % 10;
        if (x % 10 < minim) minim = x % 10;
    }
}

int main() {
    int x, maxim, minim;
    cin >> x;
    digit_maxim_i_minim(x, maxim, minim);
    cout << maxim << ' ' << minim << endl;
}