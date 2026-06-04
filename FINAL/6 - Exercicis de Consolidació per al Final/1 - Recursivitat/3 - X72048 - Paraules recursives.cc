#include <iostream>
using namespace std;
#include <string>

// Pre: n >= 0
// Post: retorna una string que conté el número n i després n vegades la concatenació
// de la string retornada per encapsular(n - 1) i el número n
string encapsular(int n) {
    if (n == 0) return "0";

    string s = to_string(n);

    for (int i = 0; i < n; ++i) {
        s += encapsular(n - 1) + to_string(n);
    }
    return s;
}

int main() {
    int d;
    while (cin >> d) {
        cout << encapsular(d) << endl;
    }
}