#include <iostream>
using namespace std;

int main() {
    char c;
    int frases_mes_as_que_bs = 0;
    bool ultima_era_pregunta = false;

    while (cin >> c) {
        int num_as = 0;
        int num_bs = 0;
        if (ultima_era_pregunta) {
            // Si l'últim signe va ser '?', llegim la següent frase
            if (c == 'a') num_as++;
            else if (c == 'b') num_bs++;

            while (cin >> c && c != '?' && c != '!' && c != '.') {
                if (c == 'a') num_as++;
                else if (c == 'b') num_bs++;
            }
            if (num_as > num_bs) frases_mes_as_que_bs++;
        }

        // Si el signe actual és '?', marquem per llegir la següent frase
        if (c == '?') ultima_era_pregunta = true;
        else ultima_era_pregunta = false;
    }
    cout << frases_mes_as_que_bs << endl;
}