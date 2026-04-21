#include <iostream>
using namespace std;

void girar_ordre(int n, int &cont)
{
    // Cas base: Aquí el cas base seria
    // que no hi hagi cin --> no fer res
    string paraula;
    if (!(cin >> paraula)) return;

    // Cas recursiu
    girar_ordre(n, cont);
    if (cont < n){
        cout << paraula << endl;
        cont++;
    }
}

int main()
{
    int n, cont = 0;
    cin >> n;
    girar_ordre(n, cont);
}