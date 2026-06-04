#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Persona {
    int id;
    string nom;
};

bool cmp(const Persona &a, const Persona &b) {
    if (a.id < b.id) return true;

    else if (a.id == b.id) {
        if (a.nom < b.nom) return true;
        else return false;
    }

    else return false;
}

bool cmp2(const Persona &a, const Persona &b) {
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
        for (int i = 0; i < n; ++i) {
            cin >> persones[i].id >> persones[i].nom;
        }

        int repeticions = 0;    // id i nom igual
        int coincidencies = 0;  // id igual però nom diferent
        sort(persones.begin(), persones.end(), cmp);

        int id_anterior = persones[0].id;
        string nom_anterior = persones[0].nom;
        for (int i = 1; i < n; ++i) {
            if (persones[i].id == id_anterior) {
                if (persones[i].nom == nom_anterior) {
                    ++repeticions;
                }
                else {
                    ++coincidencies;
                }
            }
            else {
                id_anterior = persones[i].id;
                nom_anterior = persones[i].nom;
            }
        }

        int conflictes = 0;     // id diferent però nom igual
        sort(persones.begin(), persones.end(), cmp2);
        int id_anterior = persones[0].id;
        string nom_anterior = persones[0].nom;
        for (int i = 1; i < n; ++i) {
            if (persones[i].nom == nom_anterior) {
                if (persones[i].id != id_anterior) {
                    ++conflictes;
                }
            }
            else {
                id_anterior = persones[i].id;
                nom_anterior = persones[i].nom;
            }
        }

    }
}