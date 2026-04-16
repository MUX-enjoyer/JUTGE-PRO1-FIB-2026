#include <iostream>
using namespace std;

int nombre_digits(int n) {
    // Cas base: un dígit
    if (n < 10) return 1;
    // Cas recursiu: compta el dígit actual i continua amb la resta
    return 1 + nombre_digits(n / 10);
}

int main () {
  int n;
  while (cin >> n) cout << nombre_digits(n) << endl;
  return 0;
}