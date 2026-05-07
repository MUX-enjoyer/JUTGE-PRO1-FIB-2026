#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Assignatura {
    string nom;                 // Nom de l'assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

struct Alumne {
    string nom;                 // Nom de l'alumne
    int dni;                    // DNI de l'alumne
    vector<Assignatura> ass;    // Llista d'assignatures de l'alumne
};


double nota(const vector<Alumne>& alums, int dni, string nom) {
    // 1 Buscar l'alumne amb el DNI donat
    for (int i = 0; i < alums.size(); ++i) {
        if (alums[i].dni == dni) {
            // 2 buscar l'assignatura
            for (int j = 0; j < alums[i].ass.size(); ++j) {
                if (alums[i].ass[j].nom == nom) {
                    // Agafar la nota
                    double nota_obtinguda = alums[i].ass[j].nota;
                    
                    // Si és NP (-1), retornar -1
                    if (nota_obtinguda == -1) {
                        return -1;
                    }
                    
                    return nota_obtinguda;
                }
            }
            // L'alumne existeix però no ha cursat aquesta assignatura
            return -1;
        }
    }
    // L'alumne no existeix
    return -1;
}

double mitjana(const vector<Assignatura>& ass) {
    // Recollim les notes vàlides (no NP)
    vector<double> notes_valides;
    for (int i = 0; i < ass.size(); ++i) {
        if (ass[i].nota != -1) {
            notes_valides.push_back(ass[i].nota);
        }
    }
    
    // Si no hi ha cap nota vàlida, retornar -1
    if (notes_valides.empty()) return -1;
    
    // Calcular la suma de les notes vàlides
    double suma = 0;
    for (int i = 0; i < notes_valides.size(); ++i) {
        suma += notes_valides[i];
    }
    
    // Retornar la mitjana
    return suma / notes_valides.size();
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    com = 0;
    // Obtenir la nota de l'alumne de referència (pot ser -1)
    double nota_referencia = nota(alums, dni, nom);
    
    // Comptar quants alumnes tenen mitjana > nota_referencia
    for (int i = 0; i < alums.size(); ++i) {
        // Calcular la mitjana de l'alumne actual
        double mitj_actual = mitjana(alums[i].ass);
        
        // Si la mitjana és estrictament superior a la de referència, contar-la
        if (mitj_actual > nota_referencia) {
            com++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<Alumne> alums(n);
    
    // Llegir dades dels alumnes
    for (int i = 0; i < n; ++i) {
        cin >> alums[i].nom >> alums[i].dni;
        
        int num_assignatures;
        cin >> num_assignatures;
        
        // Llegir les assignatures de l'alumne
        for (int j = 0; j < num_assignatures; ++j) {
            Assignatura ass;
            cin >> ass.nom >> ass.nota;
            alums[i].ass.push_back(ass);
        }
    }
    
    // Processar consultes fins a EOF
    int dni;
    string nom_assignatura;
    
    while (cin >> dni >> nom_assignatura) {
        int resultat;
        compta(alums, dni, nom_assignatura, resultat);
        cout << resultat << endl;
    }
    
    return 0;
}