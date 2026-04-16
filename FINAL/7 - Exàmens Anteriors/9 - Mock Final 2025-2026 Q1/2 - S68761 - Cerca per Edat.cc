
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA
#define PERSONA

struct Persona {
	string nom;
	int edat;
};
#endif

/* PRE:  persones és un vector de persones ordenat per edat.
   POST: torna l'índex de la primera persona amb exactament 'anys' anys, o -1 si no n'hi ha cap. */
int cerca_per_edat(const vector<Persona>& persones, int anys);

int main() {
	int n = 0;
	cin >> n;

	vector<Persona> persones(n);

	for (int i = 0; i < n; i++) {
		cin >> persones[i].nom >> persones[i].edat;
	}

	int anys;
	while (cin >> anys) {
		int r = cerca_per_edat(persones, anys);
		cout << r << endl;
	}

	return 0;
}
