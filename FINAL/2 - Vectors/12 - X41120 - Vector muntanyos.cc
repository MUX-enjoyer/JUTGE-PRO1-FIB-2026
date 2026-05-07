#include <vector>
#include <iostream>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    vector<int> cims;
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i] > v[i-1] && v[i] > v[i+1]) {
            cims.push_back(v[i]);
        }
    }
}

int main() {
    int n, altura;
    cin >> n;
    vector<int> muntanya;
    for (int i = 0; i < n; ++i) {
        cin >> muntanya[i];
    }

    vector<int> cims = calcula_cims(muntanya);
    cout << cims.size() << " ";
    for (int i = 0; i < cims.size(); i++) {
        cout << cims[i];
    }
    cout << endl;

    bool trobat = false;
    for (int i = 0; i < cims.size()-1; ++i) {
        if (cims[i] > cims[cims.size()-1]) {
            cout << cims[i];
            trobat = true;
        }
    }
    if (!trobat) cout << "-";
    cout << endl;
}