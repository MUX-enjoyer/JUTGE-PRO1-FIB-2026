#include <iostream>
using namespace std;

// Pre: n > 0
// Post: Imprimeix n asteriscs seguits d'un salt de línia
void imprimir_asteriscs(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
}

// Pre: n > 0
// Post: Imprimeix un patró recursiu de quadrats d'asteriscs de costat n
void patro(int n) {
    if (n == 1) cout << "*" << endl;

    else {
        patro(n-1);
        for (int i = 0; i < n; i++) {
            imprimir_asteriscs(n);
            cout << endl;
        }
        patro(n-1);
    }


}

int main() {
    int n;
    while(cin >> n) {
        patro(n);
        cout << endl;
    }   
}