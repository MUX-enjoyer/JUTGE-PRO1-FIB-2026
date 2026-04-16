
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef TIPUS
#define TIPUS

struct Casa {
	string nom;
	int pos;
};

struct Poble {
	int inici, fi;
	int num_cases;
};

#endif

/*
 * Detecta els pobles en una seqüència de cases.
 *
 * @pre  Les cases estan ordenades per nom.
 * @post Els pobles estan ordenats per posició.
 */
vector<Poble> detecta_pobles(vector<Casa>& cases);

void llegeix(vector<Casa>& cases, int n) {
	for (int i = 0; i < n; i++) {
		cin >> cases[i].nom >> cases[i].pos;
	}
}

void escriu(const vector<Poble>& pobles) {
    cout << "___" << endl;
	for (unsigned int i = 0; i < pobles.size(); i++) {
        const Poble& p = pobles[i];
		cout << p.inici << " " << p.fi << " " << p.num_cases << endl;
	}
	cout << endl;
}

int main() {
	int n = 0;
	while (cin >> n) {
		vector<Casa> cases(n);
		llegeix(cases, n);
		vector<Poble> pobles = detecta_pobles(cases);
		escriu(pobles);
	}

	return 0;
}
