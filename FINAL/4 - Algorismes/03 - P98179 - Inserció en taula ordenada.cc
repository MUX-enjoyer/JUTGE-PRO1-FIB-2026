#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
    int n = v.size();
    if (n < 2) return; // Si el vector té 0 o 1 elements, ja està "ordenat"

    double x = v[n - 1]; // Agafem l'últim element
    int j = n - 2; // Comencem a comparar des del penúltim element

    // Desplacem els elements més grans que x cap a la dreta
    while (j >= 0 && v[j] > x) {
        v[j + 1] = v[j]; // Desplacem l'element a la dreta
        --j;
    }
    
    // Col·loquem x a la seva posició correcta
    v[j + 1] = x;
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        insereix(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
    return 0;
}
