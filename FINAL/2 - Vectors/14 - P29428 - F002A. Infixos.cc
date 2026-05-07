#include <iostream>
#include <vector>
using namespace std;


bool conte(string s1, string s2) {
    int i = 0, j = 0;
    while (i < s1.size()) {
        // Si coincideixen, avancem en les dues cadenes
        if (s1[i] == s2[j]) {
            i++;
            j++;
            // Si hem arribat al final de s2, s1 conte s2
            if (j == s2.size()) return true;
        }
        // Si no coincideixen reiniciem j a 0
        else if (j !=0 ) j = 0;
        // Si no coincideixen i j ja és 0, avancem només en s1
        else i++;
    }
    // Si hem recorregut s1 i no hem trobat s2, s1 no conte s2
    return false;
}


int main() {
    int n;
    cin >> n;
    vector<string> paraules(n);
    for (int i = 0; i < n; i++) {
        cin >> paraules[i];
    }

    // Mirar combinacions si s1 conte s2
    for (int i = 0; i < n; i++) {
        cout << paraules[i] << ":";
        for (int j = 0; j < n; j++) {
            if (i != j && conte(paraules[i], paraules[j])) {
                cout << " " << paraules[j];
            }
        }
        cout << endl;
    }    
}