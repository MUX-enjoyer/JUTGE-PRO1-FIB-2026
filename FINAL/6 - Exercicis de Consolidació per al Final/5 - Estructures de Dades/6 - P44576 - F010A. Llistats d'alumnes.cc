#include <iostream>
#include <vector>
using namespace std;


struct Alumne {
    int dni;
    string nom;
};


struct Nota {
    int dni;
    string ass;     // assignatura
    string fac;     // facultat
    double nota;
};


void llegeix_alumnes(vector<Alumne>& alumnes) {
    int m;
    cin >> m;
    alumnes = vector<Alumne>(m);
    for (int i = 0; i < m; ++i) cin >> alumnes[i].dni >> alumnes[i].nom;
}


void llegeix_notes(vector<Nota>& notes) {
    int n;
    cin >> n;
    notes = vector<Nota>(n);
    for (int i = 0; i < n; ++i) {
        cin >> notes[i].dni >> notes[i].ass >> notes[i].fac >> notes[i].nota;
    }
}


int main() {
    cout.setf(ios::fixed);      // estableix el format dels reals
    cout.precision(2);          // per escriure les notes

    vector<Alumne> alumnes;
    vector<Nota> notes;
    llegeix_alumnes(alumnes);
    llegeix_notes(notes);

    int n_alumnes = alumnes.size();
    int m_notes = notes.size();

    int i = 0, j = 0;
    bool canvi_alumne = true;
    int num_assig_alumne = 0;
    int sum = 0;

    while (i < n_alumnes && j < m_notes) {
        if (alumnes[i].dni == notes[j].dni) {

            // Si encara no ho he fet imprimeixo el dni i nom de l'alumne actual
            if (canvi_alumne) {
                cout << alumnes[i].dni << " " << alumnes[i].nom << endl;
                canvi_alumne = false;
                sum = 0;
                num_assig_alumne = 0;
            }

            // Imprimeixo nota assignatura
            cout << "     " << notes[j].ass << " " << notes[j].fac;
            cout << " " << notes[j].nota << endl;
            num_assig_alumne++;
            sum += notes[j].nota;
            ++j;
        }

        else {
            if (!canvi_alumne) {
                cout << "     mitjana:" << sum / num_assig_alumne << endl << endl;
                canvi_alumne = true;
            }
            
            if (alumnes[i].dni < alumnes[j].dni) ++i;
            else ++j;
        }
    }
}