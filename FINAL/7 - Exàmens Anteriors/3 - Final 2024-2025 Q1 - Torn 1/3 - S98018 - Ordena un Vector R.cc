
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void escriu_vector(const vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	return;
}

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

/*
 * PRE:  v és un vector R, i pos és la posició de y_1 a v.
 * POST: v està ordenat.
 */
void ordena(vector<int>& v, int pos);

int main() {
	int n;

	while (cin >> n) { /* n >= 3 */
		vector<int> v = llegeix_vector(n);

		int pos;
		cin >> pos; /* posició de y_1 */
		ordena(v, pos);

		escriu_vector(v);
	}

	return 0;
};
