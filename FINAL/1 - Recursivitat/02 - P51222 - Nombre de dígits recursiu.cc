#include <iostream>
using namespace std;

int nombreDigits(int n) {
    // Cas base: un dígit
    if (n < 10) return 1;
    // Cas recursiu: compta el dígit actual i continua amb la resta
    return 1 + nombreDigits(n / 10);
}

int sumarDigits(int n) {
    // Cas base: un dígit, retorna el dígit
    if (n < 10) return n;
    // Cas recursiu: suma el dígit actual i continua amb la resta
    return (n % 10) + sumarDigits(n / 10);
}

int reduccioDigits(int n) {
    int suma = sumarDigits(n);

    // Cas base: si la suma és un dígit, retorna la suma
    if (suma < 10) return suma;
    // Cas recursiu: continua reduint la suma fins que sigui un dígit
    else return reduccioDigits(suma);
}

int reduccioDigits2(int n) {
    // Cas base: si la suma és un dígit, retorna la suma
    if (n < 10) return n;
    // Cas recursiu: continua reduint la suma fins que sigui un dígit
    return reduccioDigits(sumarDigits(n));
}

void girar_paraules() {
    string paraula;
    bool heLlegitParaula = (cin >> paraula);
    if (!heLlegitParaula) return;
    else {
        girar_paraules();
        cout << paraula << endl;
    }
}