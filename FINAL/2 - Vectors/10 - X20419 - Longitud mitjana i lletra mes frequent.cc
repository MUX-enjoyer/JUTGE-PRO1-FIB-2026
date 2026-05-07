#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Funció per calcular la longitud mitjana de les paraules
double longitud_mitja(vector<string> vec) {
    int tamany = vec.size();
    double suma = 0;
    for (int i = 0; i < tamany; ++i) {
        suma += vec[i].size();
    }
    return (suma/tamany);
}

// Funció per trobar la lletra més freqüent en paraules amb longitud >= mitjana
char lletra_mes_frequent(const string& s) {
    const int LONG_ALFABET = 'z' - 'a' + 1;
    vector<int> alfabet(LONG_ALFABET, 0);
    for (int i = 0; i < s.size(); ++i) {
        ++alfabet[s[i] - 'a'];
    }

    int max = 0;
    for (int k = 0; k < LONG_ALFABET; ++k) {
        if (alfabet[k] > alfabet[max]) max = k;
    }
    return ('a' + max);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    vector<string> paraules(n);
    for (int i = 0; i < n; ++i) {
        cin >> paraules[i];
    }

    // Calcular i mostrar la longitud mitjana
    double mitja = longitud_mitja(paraules);
    cout << mitja << endl;

    // Trobar i mostrar la lletra més freqüent en les paraules amb longitud >= mitja
    for (int i = 0; i < n; ++i) {
        if (paraules[i].size() >= mitja) {
            cout << paraules[i] << ": " << lletra_mes_frequent(paraules[i]) << endl;
        }
    }
}