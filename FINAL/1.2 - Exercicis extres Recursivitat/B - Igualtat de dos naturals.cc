/*
B) Igualtat de dos naturals dígit a dígit:
Feu una funció recursiva que, donats dos naturals a i b , indiqui si són iguals
* iguals(1234, 1) --> false
* iguals(1, 1234) --> false
* iguals(7, 7) --> true
* iguals(12345, 12345) → true
* iguals(1234, 234) --> false
Fixeu-vos que el cas base serà quan tots dos arribin a 0!
*/
#include <iostream>
using namespace std;

bool iguals(int a, int b) {
    // Cas base: si tots dos són 0, són iguals
    if (a == 0 && b == 0) return true;

    // Si només un dels dos és 0, no són iguals
    if (a == 0 || b == 0) return false;

    // Cas recursiu: comparem els últims dígits i continuem amb la resta
    if (a % 10 != b % 10) return false; // Si els últims dígits no són iguals, retornem false

    return iguals(a / 10, b / 10); // Continuem comparant la resta dels dígits
}

int main() {
    
    int a, b;
    while (cin >> a >> b) {
        if (iguals(a, b)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}