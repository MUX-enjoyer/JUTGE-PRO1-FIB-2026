#include <iostream>
using namespace std;


int nombre_digits(int n);


int main () {
  int n;
  while (cin >> n) cout << nombre_digits(n) << endl;
  return 0;
}
