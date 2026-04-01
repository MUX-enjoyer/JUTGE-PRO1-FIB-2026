#include <iostream>

using namespace std;

// PRE: c és un caràcter que representa un dígit (entre '0' i '9')
// POST: retorna el valor numèric del dígit representat per c
int char_a_digit(char c) {
    return c - '0';
}

int main() {
    char c1, mes, c2, igual, c3;
    int n1, n2, n3;
    while (cin >> c1 >> mes >> c2 >> igual >> c3) {
        int solucio;

        if (c1 == 'x') {
            // x + n2 = d3  =>  x = d3 - n2
            n2 = char_a_digit(c2);
            n3 = char_a_digit(c3);
            solucio = n3 - n2;
        } else if (c2 == 'x') {
            // d1 + x = d3  =>  x = d3 - d1
            n1 = char_a_digit(c1);
            n3 = char_a_digit(c3);
            solucio = n3 - n1;
        } else { // c3 == 'x'
            // d1 + n2 = x  =>  x = d1 + n2
            n1 = char_a_digit(c1);
            n2 = char_a_digit(c2);
            solucio = n1 + n2;
        }

        cout << solucio << endl;
    }
}
