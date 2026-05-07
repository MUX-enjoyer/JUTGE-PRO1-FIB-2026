#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Verifica si s1 conté s2 com a subcadena (no necessàriament contínua)
bool conte(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    
    // Per a cada posició inicial en s1
    for (int i = 0; i < n1; ++i) {
        // Si el primer caracter de s2 coincideix amb s1[i]
        if (s1[i] == s2[0]) {
            int matches = 1;
            // Verifica que tots els caracters següents coincideixen
            for (int k = 1; k < n2; ++k) {
                if (s1[i + k] == s2[k]) ++matches;
            }
            // Si tots els n2 caracters coincideixen
            if (matches == n2) return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> paraules(n);
    for (int i = 0; i < n; ++i) {
        cin >> paraules[i];
    }
    
    // Per a cada paraula
    for (int i = 0; i < n; ++i) {
        cout << paraules[i] << ':';
        
        // Busca totes les paraules que conté
        for (int j = 0; j < n; ++j) {
            // Només comprova si la longitud permet que s'hi contingui
            if (paraules[i].size() >= paraules[j].size() && 
                conte(paraules[i], paraules[j])) {
                cout << ' ' << paraules[j];
            }
        }
        cout << endl;
    }    
}