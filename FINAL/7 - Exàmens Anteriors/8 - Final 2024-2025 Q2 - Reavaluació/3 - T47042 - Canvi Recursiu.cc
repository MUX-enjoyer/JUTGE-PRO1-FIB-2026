
#include <iostream>
#include <cassert>
using namespace std;

/*
 * Torna el canvi de x en monedes de 25, 5, 2 i 1 euros.
 * El canvi cal que contingui les monedes més grans possibles.
 * Només una solució recursiva.
 */

void canvi(int x);

int main() 
{
	int N;
	while (cin >> N) {canvi(N);}

	return 0;
}
