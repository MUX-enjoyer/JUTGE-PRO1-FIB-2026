#include <iostream>
using namespace std;

int main() {
    int k, n, m;
    cin >> k >> n >> m;

    for (int i = 0; i < k; i++) {
        int num = 10;
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                cout << --num;
                if(num == 0) num = 10;
            }
            cout << endl;
        }
        cout << endl;
    }
}