#include <typeinfo>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

double pib(const Paisos& p, char c, double d);

int main()
{
    int n;
    cin >> n;
    Paisos p(n);
    for (int i = 0; i < n; ++i) {
        int np;
        cin >> p[i].nom >> p[i].capital >> np;
        p[i].provs = vector<Provincia>(np);
        for (int j = 0; j < np; ++j) {
            cin >> p[i].provs[j].nom >> p[i].provs[j].capital >> p[i].provs[j].habitants >> p[i].provs[j].area >> p[i].provs[j].pib;
        }
    }
    cout << pib(p, 'A', 10) << endl;
    cout << pib(p, 'A', 20) << endl;
    cout << pib(p, 'A', 30) << endl;
    cout << pib(p, 'A', 40) << endl;
    cout << pib(p, 'E', 10) << endl;
    cout << pib(p, 'E', 20) << endl;
    cout << pib(p, 'E', 30) << endl;
    cout << pib(p, 'E', 40) << endl;
    cout << pib(p, 'C', 40) << endl;
    return 0;
}
