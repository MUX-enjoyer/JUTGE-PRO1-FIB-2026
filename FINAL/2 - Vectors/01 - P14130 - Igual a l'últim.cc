#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> v(n);

    // Llegeixo el vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Agafo l'últim element
    int ultim = v[n - 1]; // v[v.size()-1]

    for (int i = 0; i < n-1; i++) {
        if (v[i] == ultim) count++;
    }

    cout << count << endl;
}