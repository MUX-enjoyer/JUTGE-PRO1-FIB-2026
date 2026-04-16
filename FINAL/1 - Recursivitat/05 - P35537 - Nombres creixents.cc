#include <iostream>
using namespace std;

bool es_creixent(int n) {
    // Cas base: un dígit, és creixent
    if (n < 10) return true; 
    
    int d0 = n%10;
    int d1 = n/10 % 10; // n%100/10

    // Comprova que els dígits actuals estan ordenats
    // Si no estan ordenats, retorna false
    bool digitsOrdenats = d1 <= d0;
    if (!digitsOrdenats) return false;

    // Si estan ordenats, continua comprovant recursivament
    // la resta dels dígits
    return es_creixent(n/10);
}

int main()
{
    int n;
    while (cin >> n)
        cout << (es_creixent(n) ? "true" : "false") << endl;
    return 0;
}
