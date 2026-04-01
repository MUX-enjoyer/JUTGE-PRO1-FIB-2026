#include <iostream>
using namespace std;

int main() {
    int serralada;

    while (cin >> serralada) {
        int pics = 0;

        // Agafo 3 ultims dígits per començar a comparar
        int posterior = serralada%10;
        int mig = (serralada/10)%10;
        int anterior = (serralada/100)%10;
        serralada /= 100;

        while (serralada > 0) {
            if (mig > anterior && mig > posterior) {
                pics++;
            }

            // Avanço un dígit i desplaço els 3 dígits a comparar
            serralada /= 10;
            posterior = mig;            
            mig = anterior;
            anterior = serralada%10;
        }

        cout << pics << endl;
    }    
}