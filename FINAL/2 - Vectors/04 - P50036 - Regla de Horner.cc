#include <iostream>
#include <vector>
using namespace std;

/*
   Si utilitzem la versió amb potencia(x, i) com que recalculem x^i des de zero
   cada cop és molt lent.

   Utilitzant la regla de Horner factoritzem la x:
       p[0] + p[1]·x + p[2]·x² + p[3]·x³
     = p[0] + x·( p[1] + x·( p[2] + x·p[3] ) )

   Així només fem multiplicació i una suma per coeficient  →  cost O(n).
*/

int avalua(const vector<int>& p, int x) {
    int resultat = 0;
    // De major a menor grau: multipliquem per x i sumem el coeficient.
    for (int i = p.size() - 1; i >= 0; --i) {
        resultat = resultat * x + p[i];
    }
    return resultat;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i = 0; i < n; ++i) {
            cin >> P[i];
        }
        int x;
        cin >> x;
        cout << avalua(P, x) << endl;
    }
}

