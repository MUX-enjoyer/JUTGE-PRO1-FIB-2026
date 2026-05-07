#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int cont = 0;
    int i = 0;    // punter al vector X
    int k = 0;    // punter al vector Y
    
    while (i < X.size() and k < Y.size()) {
        // element de X és més petit, avancem X
        if (X[i] < Y[k]) ++i;

        // element de Y és més petit, avancem Y
        else if (X[i] > Y[k]) ++k;

        // els elements són iguals
        else {
            ++i;              // avancem els dos
            ++k;              // avancem els dos
            ++cont;           // afegim una coincidència
        }
    }
    return cont;
}

int main()
{
    int n, m;
    while (cin >> m >> n) {

        vector<int> X(m);
        for (int i = 0; i < m; ++i)
            cin >> X[i];

        vector<int> Y(n);
        for (int i = 0; i < n; ++i)
            cin >> Y[i];

        cout << elements_comuns(X, Y) << endl;
    }
    return 0;
}