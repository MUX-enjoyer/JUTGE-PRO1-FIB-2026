#include <iostream>
using namespace std;

int main() {
    int felicitat = 0;
    int tristesa = 0;
    
    char c3, c2, c1;
    cin >> c3 >> c2;
    while (cin >> c1) {
        if (c3 == '(' && c2 == '-' && c1 == ':') felicitat++;
        else if (c3 == ':' && c2 == '-' && c1 == ')') felicitat++;
        else if (c3 == ')' && c2 == '-' && c1 == ':') tristesa++;
        else if (c3 == ':' && c2 == '-' && c1 == '(') tristesa++;

        c3 = c2;
        c2 = c1;
    }
    cout << felicitat << " " << tristesa << endl;
}