#include <iostream>
using namespace std;

void patro(int n, int pos) {
    if (n == 1) {
        int espais = pos - 1;
        for (int i = 0; i < espais; i++) cout << " ";
        cout << "X" << endl;
    }

    patro(n-1, pos);

    int espais = pos - n;
    for (int i = 0; i < espais; i++) cout << " ";
    for (int i = 0; i < n; i++) cout << "X";
    cout << endl;

    patro(n-1, pos);
}


int main() {
    int n;
    while (cin >> n) {
        patro(n, n);
    }
}