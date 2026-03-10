#include <iostream>
using namespace std;

string parenthesize(string s, int n);

int main()  {
    string word;
    int n;
    while (cin >> word >> n) {
        cout << parenthesize(word, n) << endl;
    }
    return 0;
}
