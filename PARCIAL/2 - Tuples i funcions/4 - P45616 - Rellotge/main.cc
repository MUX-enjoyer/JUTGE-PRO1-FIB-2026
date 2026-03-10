#include <iostream>
#include <typeinfo>
using namespace std;

Rellotge mitja_nit();
void incrementa(Rellotge& r);
void escriu(const Rellotge& r);

int main()
{
    Rellotge r = mitja_nit();
    for (int i = 0; i <= 25 * 60 * 60; ++i) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
