#include <iostream>
using namespace std;


bool es_primer_perfecte(int n);


int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
    return 0;    
}
