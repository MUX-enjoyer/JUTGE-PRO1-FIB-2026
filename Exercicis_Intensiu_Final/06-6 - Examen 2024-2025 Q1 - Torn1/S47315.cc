
#include <iostream>
#include <string>

using namespace std;

/* 
 * PRE: s.size() > 0 i 0 <= n <= 20 i tot caràcter d's és entre 'A' i 'F'.
 * POST: l'ofuscació de s respecte a n
 */
 void ofuscacio(int n,string s) {
    int mida = s.size();
    if (mida > 0) {
        char actual = char(s[mida - 1] + n);
        s.pop_back();
        ofuscacio(n, s);
        cout << actual;
    }
 }
