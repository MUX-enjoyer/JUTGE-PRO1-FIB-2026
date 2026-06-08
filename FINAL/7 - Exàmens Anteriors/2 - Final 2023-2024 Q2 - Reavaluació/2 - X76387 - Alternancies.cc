#include <iostream>
#include <string>
using namespace std;

// Pre: c és una lletra minúscula
// Post: Retorna true si c és una consonant, i false en cas contrari.
bool es_consonant(const char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return false;
    }
    
    return true;
}

// Pre: s és una paraula formada per lletres
// Post: Retorna true si s és una paraula alternada, i false en cas contrari.
bool paraula_alternada(const string s) {
    bool ant_alternada = es_consonant(s[0]);

    for (int i = 1; i < s.size(); i++) {
        bool act_alternada = es_consonant(s[i]);
        if (act_alternada == ant_alternada) {
            return false;
        }
        ant_alternada = act_alternada;
    }

    return true;
}


int main() {
    int n;
    while (cin >> n) {
        int cont = 0;

        if (n != 0) {
            string s;
            cin >> s;
            bool ant_alternada = paraula_alternada(s);

            for (int i = 1; i < n; i++) {
                string s;
                cin >> s;
                bool act_alternada = paraula_alternada(s);
                if (act_alternada != ant_alternada) {
                    cont++;
                }
                ant_alternada = act_alternada;
            }

            cout << cont << endl;
        }
    }
}