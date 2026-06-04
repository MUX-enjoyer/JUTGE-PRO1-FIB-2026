#include <iostream>
#include <vector>
using namespace std;

vector<int> v(46, -1);

int f(int i) {
    if (i == 0) return -3;
    if (i == 1) return -1;
    if (i == 2) return 4;
    if (i == 3) return 8;
    if (i == 4) return 15;

    if (v[i] != -1) return v[i];

    v[i] = f(i-5) + f(i-3) + f(i-1);
    return v[i];
}
int main() {
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
            cout << f(i) << " ";
        cout << "..." << endl;
    }
}