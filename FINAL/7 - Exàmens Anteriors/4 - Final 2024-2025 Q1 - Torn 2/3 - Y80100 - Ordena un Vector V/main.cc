
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*-------------------------------------------------------------------
 * PRE:  v és un vector V, pos és la posició de y_1 a v,
 * 		 |r| = |v|.
 * POST: r conté els valors del vector v ordenats creixentment.
 */
void ordena(const vector<int>& v, int pos, vector<int>& r);

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

void escriu_vector(const vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;

	while (cin >> n) { /* n >= 3 */
		vector<int> v = llegeix_vector(n);
		vector<int> r(n, 0);

		int pos;
		cin >> pos;
		ordena(v, pos, r);

		escriu_vector(r);
	}

	return 0;
};
