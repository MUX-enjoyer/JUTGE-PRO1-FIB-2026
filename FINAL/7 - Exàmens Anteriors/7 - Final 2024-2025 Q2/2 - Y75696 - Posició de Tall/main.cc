#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*  --> Descomenteu aquesta declaració per poder compilar <--
struct Participant {
	string nom;
	double punts;
};
*/

/**
 * @brief Retorna la primera posició `p` des del principi del vector, 
 * tal que el participant a `p` és el primer amb menys de la meitat 
 * de la puntuació del guanyador. Es pot suposar que aquesta cerca 
 * _sempre_ tindrà exit.
 * 
 * @pre El vector `participants` està ordenat de més a menys punts.
 */
int posicio_de_tall(const vector<Participant>& participants);

vector<Participant> llegeix_participants(int N, istream& in) {
	vector<Participant> participants(N);
	for (int i = 0; i < N; i++) {
		in >> participants[i].nom >> participants[i].punts;
	}
	return participants;
}

int main() {
	ios::sync_with_stdio(false);

	int N;
	while (cin >> N) {
		string linia;
		getline(cin, linia);
		getline(cin, linia);
		istringstream iss(linia);
		auto participants = llegeix_participants(N, iss);

		int pos;
		for (int i = 0; i < 10000; i++) {
			pos = posicio_de_tall(participants);
		}
		cout << pos << endl;
	}

	return 0;
}
