#include <iostream>
#include <typeinfo>
using namespace std;

struct Rellotge {
    int h; // hores (0<=h<24)
    int m; // minuts (0<=m<60)
    int s; // segons (0<=s<60)
};

Rellotge mitja_nit() {
    Rellotge r;
    r.h = 0;
    r.m = 0;
    r.s = 0;
    return r;
}

void mitja_nit(Rellotge& r) {
    r.h = 0;
    r.m = 0;
    r.s = 0;
}



// Pre: una hora  (0<=h<24), (0<=m<60), (0<=s<60)
// Post: sumo un segon
void incrementa(Rellotge& r) {
    r.s++;
    if (r.s == 60) {
        r.s = 0;
        r.m++;
        if (r.m == 60) {
            r.m = 0;
            r.h++;
            if (r.h == 24) {
                r.h = 0;
            }
        }
    }
}


// Pre: Un nombre enter positiu
// Post: Imprimeix un nombre amb el format de dues xifres
// Si és menor a deu 0num i sinó num
void imprimir_num_dos_xifres(int num) {
    if (num < 10) cout << '0';
    cout << num;
}

void escriu(const Rellotge& r) {
    imprimir_num_dos_xifres(r.h);
    cout << ':';
    imprimir_num_dos_xifres(r.m);
    cout << ':';
    imprimir_num_dos_xifres(r.s);
    cout << endl;
}

int main()
{
    Rellotge r = mitja_nit();
    for (int i = 0; i <= 25 * 60 * 60; ++i) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
