#include <iostream>
#include <vector>
using namespace std;

bool suma_demes(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j < v.size(); j++) {
            if (i != j) sum += v[j];
        }
        if (sum == v[i]) return true;
    }
} // O(n^2)

bool suma_demes_mat(const vector<int>& v, int sum) {
    for (int i = 0; i < v.size(); i++) {
        if (sum - v[i] == v[i]) return true;
    }
    return false;
} // O(n)

int main() {
    int n;
    while(cin >> n) {
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (suma_demes_mat(v, sum)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}