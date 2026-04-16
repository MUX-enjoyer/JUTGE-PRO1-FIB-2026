#include <iostream>
using namespace std;

bool es_creixent(int n) {
    if(n < 10) return true; 
    
    int d0 = n%10;
    int d1 = n/10 % 10; // n%100/10
    bool ultims2digitsCreixents = d1 <= d0;
    if (!ultims2digitsCreixents) return false;

    return es_creixent(n/10);
}

int main()
{
    int n;
    while (cin >> n)
        cout << (es_creixent(n) ? "true" : "false") << endl;
    return 0;
}
