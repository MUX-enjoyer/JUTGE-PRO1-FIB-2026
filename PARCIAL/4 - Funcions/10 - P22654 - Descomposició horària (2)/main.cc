#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s);

int main()
{
    int n, h, m, s;
    while (cin >> n) {
        descompon(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }

    return 0;
}
