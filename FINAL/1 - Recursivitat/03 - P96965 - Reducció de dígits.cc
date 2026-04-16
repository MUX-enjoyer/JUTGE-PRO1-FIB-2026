#include <iostream>
using namespace std;

int sumar_digits(int n) {
    // Cas base: un dígit, retorna el dígit
    if (n < 10) return n;
    // Cas recursiu: suma el dígit actual i continua amb la resta
    return (n % 10) + sumar_digits(n / 10);
}

int reduccio_digits(int n) {
    int suma = sumar_digits(n);

    // Cas base: si la suma és un dígit, retorna la suma
    if (suma < 10) return suma;
    // Cas recursiu: continua reduint la suma fins que sigui un dígit
    else return reduccio_digits(suma);
}

int main()
{
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}