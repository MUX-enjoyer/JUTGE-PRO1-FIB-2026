#include <iostream>
#include <vector>
using namespace std;

// Funció per comprovar si un nombre és primer
bool es_primer(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = i + 1; j < n && !found; ++j) {
                if (es_primer(nums[i] + nums[j])) {
                    found = true;
                }
            }
        }


        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = i + 1; j < n && !found; ++j) {
                if (es_primer(nums[i]+nums[j])) {
                    found = true;
                }
            }
        }

        if (found) cout << "si" << endl;
        else cout << "no" << endl;
    }
}