#include <iostream>
#include <string>

using namespace std;

// PRE: op entre {+,-,*}
// POST: retorna el resultat d'aplicar l'operador entre n1 i n2
int calcular_Operacio(int n1, char op, int n2) {
    if (op == '+') return n1 + n2;
    else if (op == '-') return n1 - n2;
    else return n1 * n2;  // op == '*'
}


// PRE: comp entre {<,<=,>,>=,==,!=}
// POST: retorna true si l'expressió s'avalua a cert, false altrament
bool avaluar_Comparacio(int resultat, string comp, int n3) {
    if (comp == "<")       return resultat < n3;
    else if (comp == "<=") return resultat <= n3;
    else if (comp == ">")  return resultat > n3;
    else if (comp == ">=") return resultat >= n3;
    else if (comp == "==") return resultat == n3;
    else                   return resultat != n3; // comp == "!="
    
    // Fixeu-vos que no fa falta que m'emmagatzemi el resultat de la comparació
    // sino que ja s'avaluarà i directament es retornarpa el resultat de l'expressió
    // (Com quan fem return 2+3, que equival a return 5)
}

int main() {
    int n1, n2, n3;
    char op;
    string comp;

    while (cin >> n1 >> op >> n2 >> comp >> n3) {
        int resultat = calcular_Operacio(n1, op, n2);
        bool avaluacio = avaluar_Comparacio(resultat, comp, n3);
        if (avaluacio) cout << "true" << endl;
        else cout << "false" << endl;
    }
}
