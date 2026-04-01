#include <iostream>
using namespace std;

void imprimir_caracters(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

int main() {
    int height, width;
    while(cin >> height >> width) {
        bool pujant = true;
        int shift_dreta = 0;
        int hashtags = width/2;

        for (int i = 0; i < height; i++) {
            // width = shift_dreta + hashtags + (width - hashtags - shift_dreta)
            imprimir_caracters(shift_dreta, '*');
            imprimir_caracters(hashtags, '#');
            imprimir_caracters(width - hashtags - shift_dreta, '*');
            cout << endl;
            
            if (pujant) shift_dreta++;
            else shift_dreta--;

            if (shift_dreta == width/2) pujant = false;
            else if (shift_dreta == 0) pujant = true;
        }
        
        cout << endl;
    }
}
