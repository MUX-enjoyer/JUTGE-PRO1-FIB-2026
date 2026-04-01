#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Comptar quantes parelles (de les C(4,2)=6 possibles) son iguals.
    // Si hi ha exactament una parella d'iguals, vol dir que dos valors
    // son idèntics entre si i els altres dos son diferents.
    int parelles = 0;
    if (a == b) parelles++;
    if (a == c) parelles++;
    if (a == d) parelles++;
    if (b == c) parelles++;
    if (b == d) parelles++;
    if (c == d) parelles++;

    if (parelles == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
