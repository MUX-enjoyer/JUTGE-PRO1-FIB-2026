#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: envolta l'string s amb n parells de parèntesis, alternant entre () i []
string parenthesize(string s, int n) {
    if (n == 0) return s;

    if (n % 2 == 1) return "(" + parenthesize(s, n-1) + ")";
    else return "[" + parenthesize(s, n-1) + "]";
}

int main()  {
    string word;
    int n;
    while (cin >> word >> n) {
        cout << parenthesize(word, n) << endl;
    }
    return 0;
}
