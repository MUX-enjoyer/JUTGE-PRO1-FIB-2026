#include <iostream>
using namespace std;

bool es_creixent(int n);

int main()
{
    int n;
    while (cin >> n)
        cout << (es_creixent(n) ? "true" : "false") << endl;
    return 0;
}
