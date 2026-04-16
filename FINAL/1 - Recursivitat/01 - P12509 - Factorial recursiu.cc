#include <iostream>
using namespace std;

int factorial(int n) {
    // Cas base: factorial de 0 és 1
    if (n == 0) return 1;

    // Cas recursiu: n! = n * (n-1)!
    int fact = factorial(n - 1);
    return  n * fact;
}

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}