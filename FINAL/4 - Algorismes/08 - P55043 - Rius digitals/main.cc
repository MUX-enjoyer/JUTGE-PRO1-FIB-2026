#include <iostream>
using namespace std;

int trobada_de_rius(int n);

int main()
{
    int n;
    while (cin >> n) {
        cout << n << " " << trobada_de_rius(n) << endl;
    }

    return 0;
}
