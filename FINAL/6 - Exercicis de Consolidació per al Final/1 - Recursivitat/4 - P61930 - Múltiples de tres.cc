#include <iostream>
using namespace std;


bool es_multiple_3(int n);


int main() {
    int n;
    while (cin >> n) {
        cout << (es_multiple_3(n) ? "true" : "false") << endl;
    }
    return 0;
}
