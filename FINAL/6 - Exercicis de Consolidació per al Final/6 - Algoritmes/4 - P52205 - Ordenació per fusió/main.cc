#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void ordena_per_fusio(vector<double>& v);

int main()
{
    cout << fixed << setprecision(1);
    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        ordena_per_fusio(v);
        for (int i = 0; i < n; ++i) {
            cout << " " << v[i];
        }
        cout << endl;
    }
    return 0;
}
