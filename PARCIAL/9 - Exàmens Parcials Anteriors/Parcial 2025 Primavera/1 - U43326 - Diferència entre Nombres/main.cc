
#include <iostream>

using namespace std;

/* Llegeix 2 naturals (enters positius) de l'entrada estàndard
 * i digues quina és la seva diferència.
 * La diferència entre dos nombres es defineix com la suma del valor
 * de la diferència (en valor absolut) dígit a dígit.
 * Per exemple, la diferència entre el 24 i el 2317 és 9:
 *
 *                              0024
 *                              2317
 *                              ----
 *                              2313 = 2 + 3 + 1 + 3 = 9
 *
 * Solució RECURSIVA únicament.
 */

int diferencia(int x, int y);

int main() {
	int x = 0, y = 0;
	while (cin >> x >> y) {
		cout << diferencia(x, y) << endl;
	}
	return 0;
}
