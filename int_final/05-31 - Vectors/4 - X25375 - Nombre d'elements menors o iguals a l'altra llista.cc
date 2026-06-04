#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> v2[i];
        }

        int i = 0;
        int j = 0;
        int count = 0;

        while (i < n && j < n) {
            if (v1[i] >= v2[j]) {
                count++;
                j++;
            }
            else {
                cout << count << " ";
                i++;
            }
        }

        if (j < n) {
            while (j < n) {
                cout << count << " ";
                j++;
            }
        }

        cout << endl;
    }
}