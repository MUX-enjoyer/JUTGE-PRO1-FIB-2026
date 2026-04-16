
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
 * PRE:  v és un vector V i ∣v∣ ≥ 3.
 * POST: La posició en què es troba y1 a v.
 */
int picV(const vector<int>& v);

/**
 * Llegeix un vector d'enters de forma més ràpida
 */
vector<int> llegeix_vector(int tamany) {
	string buit, linia;

	// Consumeix el '\n' de després del tamany
	getline(cin, buit);

	// Un sol vector està en una línia de text,
	// per tant aquesta instrucció omple la memòria de cop
	getline(cin, linia);

	// Llegirem d'aquest buffer directament (sense tocar el disc)
	istringstream iss(linia);

	vector<int> v(tamany);
	for (int i = 0; i < tamany; ++i) {
		iss >> v[i];
	}

	return v;
}

int main() {
  	// Evita la sincronització entre la i/o de C i C++ (més velocitat)
	std::ios_base::sync_with_stdio(false);

	int tamany;
	while (cin >> tamany) { /* n >= 3 */
        vector<int> v = llegeix_vector(tamany);

        // Cridem la funció 1000 vegades per exagerar el temps d'execució
        int pos;
        for (int i = 0; i < 1000; i++) {
            pos = picV(v);
        }

		cout << pos << endl;
	}

	return 0;
};
