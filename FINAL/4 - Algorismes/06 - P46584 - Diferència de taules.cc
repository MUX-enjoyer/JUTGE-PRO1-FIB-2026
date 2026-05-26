#include <iostream>
#include <vector>
using namespace std;


vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {
    vector<double> resultat;
    
    int i = 0; // Punter per a v1
    int j = 0; // Punter per a v2

    while (i < v1.size()) {
        // Si v2 s'ha acabat, qualsevol element nou de v1 va directe al resultat
        if (j == v2.size()) {
            resultat.push_back(v1[i]);
            i++;
        }

        // Si l'element de v1 és més petit, no pot estar a v2 (perquè v2 està ordenat)
        else if (v1[i] < v2[j]) {
            // Per tant l'afegim al resultat i avancem el punter de v1
            resultat.push_back(v1[i]);
            i++;
        }

        // Si són iguals, l'ignorem (el volem eliminar) i avancem i
        else if (v1[i] == v2[j]) {
            i++;
        }

        // Si v1[i] és més gran, avancem el punter de v2 per buscar el següent element
        else { // v1[i] > v2[j]
            j++;
        }
    }
    return resultat;
}


int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = diferencia(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = diferencia(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
  return 0;
}
