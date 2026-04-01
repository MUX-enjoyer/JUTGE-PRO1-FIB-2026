#include <iostream>
#include <string>

using namespace std;

// Pre: num >= 0
// Post: retorna el nombre de dígits de num
int num_digits(int num) {
    if (num == 0) return 1;
    int cont = 0;
    while (num > 0) {
        num /= 10;
        cont++;
    }
    return cont;
}

// Pre: longitud > 0, longitud és parell
// Post: m1 conté la primera meitat de num, m2 la segona meitat
void separar(int num, int longitud, int &m1, int &m2) {
    int divisor = 1;
    // Calculem el divisor per partir el nombre pel mig
    for (int i = 0; i < longitud / 2; i++) {
        divisor *= 10;
    }
    m1 = num / divisor;      // Primera meitat
    m2 = num % divisor;      // Segona meitat
}

// Pre: n >= 0
// Post: retorna el nombre amb l'ordre dels dígits invertits
int girar_num(int n) {
    int res = 0;
    while (n > 0) {
        int digit = n % 10;      // Extreiem l'últim dígit
        res = digit + res * 10;  // El col·loquem al principi del resultat
        n /= 10;                 // Eliminem l'últim dígit de n
    }
    return res;
}

int main() {
    int n;
    while (cin >> n) {
        int longitud = num_digits(n);
        int meitat1, meitat2;
        separar(n, longitud, meitat1, meitat2);
        int meitat1_girada = girar_num(meitat1);  // Invertim la primera meitat
        cout << n << " -> " << meitat1_girada+meitat2 << endl;  // Sumem les dues meitats
    }
}