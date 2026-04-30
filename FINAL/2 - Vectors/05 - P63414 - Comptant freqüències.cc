#include <iostream>
#include <vector>
using namespace std;

const int FREQ_MIN = 1000000000;

int main() {
    vector<int> freq(1001, 0);
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        freq[x-FREQ_MIN]++;
    }
    
    for (int i = 0; i < freq.size(); ++i) {
        if (freq[i] > 0) {
            cout << i + FREQ_MIN << " : " << freq[i] << endl;
        }
    }
}