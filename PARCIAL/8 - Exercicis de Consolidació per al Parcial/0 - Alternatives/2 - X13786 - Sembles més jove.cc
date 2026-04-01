#include <iostream>
#include <string>

using namespace std;

void ignorar_paraules(int n) {
    string paraula;
    for (int i = 0; i < n; ++i) {
        cin >> paraula;
    }
}

int main() {
    string paraula, name;
    int years, thought_years;

    while (cin >> paraula) {
        ignorar_paraules(2);
        cin >> name;
        ignorar_paraules(3);
        cin >> years;
        ignorar_paraules(2);
        cout << name << ", you look younger. I thought you were ";
        cout << years - (years/10) << " years old." << endl;
    }
}