# F010A. Llistats d'alumnes

El Cap de l'Àrea de Suport a la Presa de Decisions de la FIB disposa
d'un llistat amb el DNI i el nom de certs estudiants de la UPC. D'altra
banda, també disposa d'un llistat que enumera les notes que alguns
estudiants de la UPC han tingut a certes assignatures de certs centres.
Tots dos llistats es troben ordenats per DNI.

A partir d'aquests dos llistats, el Cap vol obtenir eficientment un
llistat que desglossi les notes de cada estudiant, i la mitjana de les
seves notes. El programa ja el té començat (vegeu lstlisting adjunt) i
us ha demanat que l'acabeu.

## Entrada

L'entrada consisteix en els dos llistats, cadascun ordenat per DNI i
sense línies repetides. El lstlisting que defineix les estructures de
dades i el code que llegeix l'entrada ja el teniu implementat. No el
toqueu!

## Sortida

La sortida és un llistat ordenat segons els DNIs que conté, per a cada
estudiant, les seves notes i la mitjana d'aquestes. Les notes han
d'aparèixer en el mateix ordre que en el segon llistat de l'entrada.

Fixeu-vos que, per a cada estudiant, cal indentar amb cinc espais la
informació de les seves notes, i cal deixar una línia en blanc després.
Observeu també que si un identificador apareix en un llistat d'entrada
però no a l'altre, aquest no ha d'aparèixer al llistat de sortida.

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

        ...                         // continueu el programa
    }

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T11:14:52.924Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
