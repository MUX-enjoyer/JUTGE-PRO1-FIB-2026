#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
    int n = v.size();

    // Per cada element a partir del segon (i = 1)
    for (int i = 1; i < n; ++i) {
        double x = v[i];
        // L'inserim a la part ordenada (a l'esquerra)

        int j = i - 1;
        // Mentre no arribem al principi (j >= 0) 
        //    i l'element de l'esquerra sigui més gran que x
        while (j >= 0 && v[j] > x) {
            v[j + 1] = v[j]; // Desplacem
            --j;
        }
        
        // Posem l'element a la seva posició correcta
        v[j + 1] = x;
    }
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
        ordena_per_insercio(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
    return 0;
}
