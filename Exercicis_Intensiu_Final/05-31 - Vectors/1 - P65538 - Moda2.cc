#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main() {
    int n;
    while(cin >> n && n != 0) {
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        string paraula_abans = v[0];
        int freq = 1;

        int freq_max = 0;
        string paraula_amb_freq_max;

        for (int i = 1; i < n; ++i) {
            if (v[i] == paraula_abans) {
                ++freq;
            }
            else {
                if (freq > freq_max) {
                    freq_max = freq;
                    paraula_amb_freq_max = paraula_abans;
                }

                paraula_abans = v[i];
                freq = 1;
            }
        }
    }
}