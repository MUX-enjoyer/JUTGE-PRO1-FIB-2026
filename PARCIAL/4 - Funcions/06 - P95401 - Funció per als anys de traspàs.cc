#include <iostream>
using namespace std;

bool es_any_de_traspas(int any);

int main()
{
    int a;
    while (cin >> a)
        cout << (es_any_de_traspas(a) ? "true" : "false") << endl;

    return 0;
}
