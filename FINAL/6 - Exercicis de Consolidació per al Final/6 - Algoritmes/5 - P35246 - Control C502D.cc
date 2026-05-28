using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

struct Persona {
    string nom;
    int edat;
};

bool cmp(Persona a, Persona b) {
    if (a.edat > b.edat) return true;
    else if (a.edat < b.edat) return false;

    if (a.nom < b.nom) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<Persona> persones(n);

    string nom_persona;
    int edat_persona;
    for (int i = 0; i < n; i++) {
        cin >> nom_persona >> edat_persona;
        persones[i].nom = nom_persona;
        persones[i].edat = edat_persona;
    }

    sort(persones.begin(), persones.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << persones[i].nom << " " << persones[i].edat << endl;

    }
}
