#include <iostream>
using namespace std;

int calc() {
    char c;
    cin >> c;

    // Cas base: si és un dígit, retornem el seu valor
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    // Cas recursiu: és un operador
    int d1 = calc();
    int d2 = calc();
    if (c == '+') return d1 + d2;
    if (c == '-') return d1 - d2;
    if (c == '*') return d1 * d2;
    if (c == '/') return d1 / d2;
}