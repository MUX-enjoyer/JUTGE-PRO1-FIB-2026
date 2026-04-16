#include <iostream>
using namespace std;

int mcd(int a, int b);

int main()
{
    int x, y;
    while (cin >> x >> y) {
        cout << mcd(x, y) << endl;
    }
    return 0;
}
