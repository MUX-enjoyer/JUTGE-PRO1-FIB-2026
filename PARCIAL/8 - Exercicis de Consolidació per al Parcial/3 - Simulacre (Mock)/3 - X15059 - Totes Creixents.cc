#include <iostream>
using namespace std;

int main() {
    int n;
    bool creix = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double num, prev;
        cin >> prev;
        while (creix && cin >> num && num != -1) {
            if (num <= prev) creix = false;
        }
    }
    if (creix) cout << "Si" << endl;
    else cout << "No" << endl;
}