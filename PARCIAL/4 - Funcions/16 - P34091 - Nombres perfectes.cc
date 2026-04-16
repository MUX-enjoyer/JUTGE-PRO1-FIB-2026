#include <iostream>
using namespace std;

bool es_perfecte(int x);

int main()
{
    int x;
    while (cin >> x)
        cout << (es_perfecte(x) ? "true" : "false") << endl;

    return 0;
}
