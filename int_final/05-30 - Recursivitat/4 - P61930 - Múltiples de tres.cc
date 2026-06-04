#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: retorna la suma dels dígits de n
int suma_digits(int n) {
    if (n == 0) return 0;
    return n % 10 + suma_digits(n / 10);
}

// Pre n >= 0
// Post: retorna true si n és múltiple de 3, i false altrament
bool es_multiple_3(int n) {
    int sum = suma_digits(n);
    
    if (sum >= 10) {
        return es_multiple_3(sum);    
    }

    if (sum == 0) return true;
    else if (sum == 3) return true;
    else if (sum == 6) return true;
    else if (sum == 9) return true;
    
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        cout << (es_multiple_3(n) ? "true" : "false") << endl;
    }
    return 0;
}
