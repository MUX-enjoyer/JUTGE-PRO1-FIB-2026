#include <iostream>
using namespace std;
#include <vector>
#include <string>

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> total(n1 + n2);
    for (int i = 0; i < n1; ++i) {
        total[i] = v1[i];
    }
    for (int k = 0; k < n2; ++k) {
        total[n1 + k] = v2[k];
    }
    return total;
}

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> v1[i];
    }
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; ++i) {
        cin >> v2[i];
    }

    vector<int> v12 = concatenacio(v1, v2);
    for (int i = 0; i < v12.size(); ++i) {
        cout << v12[i] << endl;
    }
}