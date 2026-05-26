#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
    // Si l'interval és buit, retornem -1
    if (esq > dre) return -1;

    int mig = (esq + dre) / 2;

    if (v[mig] == x) return mig;

    else if (v[mig] < x) {
        return posicio(x, v, mig+1, dre);
    }
    else if (v[mig] > x) {
        return posicio(x, v, esq, mig-1);
    }

    // Si no hem trobat el valor, retornem -1
    return -1;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, V, esq, dre) << endl;
        }
    }
    return 0;
}
