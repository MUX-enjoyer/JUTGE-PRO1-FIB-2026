#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    // Primer, recollim tots els estudiants que compleixen els criteris
    vector<double> notes_valides;
    
    for (int i = 0; i < es.size(); ++i) {
        // Comprovem si l'estudiant s'ha presentat I no és repetidor
        if (es[i].nota != -1 && !es[i].repetidor) {
            notes_valides.push_back(es[i].nota);
        }
    }
    
    // Si no hi ha cap estudiant vàlid, retornem -1
    if (notes_valides.empty()) {
        min = -1;
        max = -1;
        mitj = -1;
        return;
    }
    
    // Si hi ha estudiants vàlids, calculem min, max i mitjana
    
    // Inicialitzem min amb la primera nota (sabem que n'hi ha almenys una)
    min = notes_valides[0];
    max = notes_valides[0];
    double suma = notes_valides[0];
    
    // Iterem sobre totes les notes vàlides
    for (int i = 1; i < notes_valides.size(); ++i) {
        double nota_actual = notes_valides[i];
        
        // Actualitzem el mínim
        if (nota_actual < min) min = nota_actual;
        
        // Actualitzem el màxim
        if (nota_actual > max) max = nota_actual;
        
        // Acumulem per calcular la mitjana
        suma += nota_actual;
    }
    
    // La mitjana és la suma dividida pel nombre d'estudiants
    mitj = suma / notes_valides.size();
}

int main()
{

    { // vigilar el tipus Estudiant

        struct Estudiant_cntrl {
            int dni;
            string nom;
            double nota;
            bool repetidor;
        };

        Estudiant ru;
        Estudiant_cntrl rc;

        // diagn�stics en temps de compilaci�
        ru.dni = rc.dni;
        ru.nom = rc.nom;
        ru.nota = rc.nota;
        rc.repetidor = ru.repetidor;

        // diagn�stics en temps d'execuci�
        if (sizeof(ru) != sizeof(rc))
            throw string("Sembla que 'Estudiant' no est� ben definit");
        if (typeid(ru.dni) != typeid(rc.dni))
            throw string("Sembla que 'Estudiant.dni' no est� ben definit");
        if (typeid(ru.nom) != typeid(rc.nom))
            throw string("Sembla que 'Estudiant.nom' no est� ben definit");
        if (typeid(ru.nota) != typeid(rc.nota))
            throw string("Sembla que 'Estudiant.nota' no est� ben definit");
        if (typeid(ru.repetidor) != typeid(rc.repetidor))
            throw string("Sembla que 'Estudiant.repetidor' no est� ben definit");
    }

    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    while (cin >> n) {
        vector<Estudiant> es(n);
        for (int i = 0; i < n; ++i) {
            cin >> es[i].nota >> es[i].repetidor;
        }
        double min, max, avg;
        informacio(es, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }

    return 0;
}
