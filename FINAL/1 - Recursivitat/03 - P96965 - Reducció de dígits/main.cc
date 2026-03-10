#include <iostream>
using namespace std;

int reduccio_digits(int n);

int main()
{
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}
