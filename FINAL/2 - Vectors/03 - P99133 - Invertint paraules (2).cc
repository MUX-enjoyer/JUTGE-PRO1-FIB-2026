#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    
    // Agafo les paraules
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Recorro les paraules del final al inici
    for (int i = n-1; i >= 0; i--) {
        string paraula = v[i];
        // Imprimeixo la paraula invertida
        for (int j = paraula.size()-1; j >= 0; j--) {
            cout << paraula[j];
        }
        cout << endl;
    }
}