#include <iostream>
using namespace std;

// Pre: a >= 0 i b >= 0
// Post: retorna el màxim comú divisor de a i b
int mcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    if (a > b) return mcd(a % b, b);
    else return mcd(a, b % a);
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        cout << mcd(x, y) << endl;
    }
    return 0;
}
