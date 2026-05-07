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

// Funció per comprovar si hi ha un parell d'elements en el vector
// que sumen un nombre primer
bool hi_ha_parell_primer(const vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (es_primer(nums[i] + nums[j])) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        bool found = hi_ha_parell_primer(nums);

        if (found) cout << "si" << endl;
        else cout << "no" << endl;
    }
}