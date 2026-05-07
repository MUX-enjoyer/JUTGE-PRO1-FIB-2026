#include <iostream>
#include <vector>
using namespace std;

void comptar_freq(vector<int>& freq, int n, int base) {
    if (n == 0) freq[0]++;
    while(n > 0) {
        freq[n%base]++;
        n/=base;
    }
}


bool mateixos_digits(int x, int y, int b) {
    vector<int> freq_prod(b, 0);
    comptar_freq(freq_prod, x, b);
    comptar_freq(freq_prod, y, b);

    int res = x * y;
    vector<int> freq_res(b, 0);
    comptar_freq(freq_res, res, b);

    if (freq_prod == freq_res) return true;
    else return false;
}

void escriu(int n, int b) {
    if (n == 0) return;
    escriu(n/b, b);
    int digit = n%b;
    if (digit < 10) cout << digit;
    else cout << char('A' + (digit - 10));
}

int main() {
    int n1, n2, res;
    while (cin >> n1 >> n2) {
        bool solucio_trobada = false;
        cout << "solucions per a " << n1 << " i " << n2 << endl;
        for (int b = 2; b <= 16; b++) {
            if (mateixos_digits(n1, n2, b)) {
                solucio_trobada = true;
                escriu(n1, b);
                cout << " * ";
                escriu(n2, b);
                cout << " = ";
                res = n1 * n2;
                escriu(res, b);
                cout << " (base " << b << ")" << endl;
            }
        }
        if (!solucio_trobada) cout << "cap" << endl;
        cout << endl;
    }
}