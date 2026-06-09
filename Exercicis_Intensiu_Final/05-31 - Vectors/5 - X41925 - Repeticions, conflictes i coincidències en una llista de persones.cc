#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Persona {
    int id;
    string nom;
};

bool cmp_id(const Persona &a, const Persona &b) {
    if (a.id < b.id) return true;
    else if (a.id == b.id) {
        if (a.nom < b.nom) return true;
        else return false;
    }
    else return false;
}

bool cmp_nom(const Persona &a, const Persona &b) {
    if (a.nom < b.nom) return true;
    else if (a.nom == b.nom) {
        if (a.id < b.id) return true;
        else return false;
    }
    else return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<Persona> persones(n);
        for (int i = 0; i < n; ++i)
            cin >> persones[i].id >> persones[i].nom;

        // --- Ordenem per (id, nom): repeticions i conflictes ---
        sort(persones.begin(), persones.end(), cmp_id);

        int repeticions = 0;
        int conflictes  = 0;
        int cnt_id_nom  = 1; // mida del grup actual (id, nom)
        int cnt_id = 1; // mida del grup actual id
        for (int i = 1; i < n; ++i) {
            if (persones[i].id != persones[i-1].id) {
                cnt_id_nom = 1;
                cnt_id = 1;
            }
            else {
                if (persones[i].nom == persones[i-1].nom) ++cnt_id_nom;
                else cnt_id_nom = 1;
                ++cnt_id;
                repeticions += cnt_id_nom - 1;      // parelles amb mateix (id, nom)
                conflictes += cnt_id - cnt_id_nom; // parelles amb mateix id, nom diferent
            }
        }

        // --- Ordenem per (nom, id): coincidències ---
        sort(persones.begin(), persones.end(), cmp_nom);

        int coincidencies = 0;
        int cnt_nom_id = 1; // mida del grup actual (nom, id)
        int cnt_nom = 1; // mida del grup actual nom
        for (int i = 1; i < n; ++i) {
            if (persones[i].nom != persones[i-1].nom) {
                cnt_nom_id = 1;
                cnt_nom = 1;
            }
            else {
                if (persones[i].id == persones[i-1].id) ++cnt_nom_id;
                else cnt_nom_id = 1;
                ++cnt_nom;
                coincidencies += cnt_nom - cnt_nom_id; // parelles amb mateix nom, id diferent
            }
        }

        cout << repeticions << " " << conflictes << " " << coincidencies << "\n";
    }
}