#include <cassert>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Matriu amb totes les lletres de l'abecedari, ordenades
 * horitzontalment, respectant el codi ASCII, i separades entre sí 7 caracters.
 * Totes tenen una amplada de 5 columnes excepte: 'i' i 'l', amb 3, 'm' i 'w',
 * amb 7.
 */
const vector<string> abecedari = { /*
     0      1      2      3      4      5      6      7      8      9     10     11     12     13     14     15     16     17     18     19     20     21     22     23     24     25
     |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
*/  "        _               _           ___           _      _        _    _      _                                                       _                                               ",
    " ___   | |_    ___    _| |   ___   |  _|   ___   | |_   |_|      |_|  | |_   | |     _____  ___    ___    ___    ___    ___    ___   | |_    _ _    _ _    _ _ _  _ _    _ _    ___   ",
    "| .'|  | . |  |  _|  | . |  | -_|  |  _|  | . |  |   |  | |      | |  | '_|  | |    |     ||   |  | . |  | . |  | . |  |  _|  |_ -|  |  _|  | | |  | | |  | | | ||_'_|  | | |  |- _|  ",
    "|__,|  |___|  |___|  |___|  |___|  |_|    |_  |  |_|_|  |_|     _| |  |_,_|  |_|    |_|_|_||_|_|  |___|  |  _|  |_  |  |_|    |___|  |_|    |___|   \\_/   |_____||_,_|  |_  |  |___|  ",
    "                                          |___|                |___|                                     |_|      |_|                                                   |___|         ",
};
// NOTA: La 4a fila té un petit desajust al final perquè el caràcter \ requereix dues barres \\ en el literal i per tant ocupa 1 caracter més del normal!

int main() {
	// --->  Cal completar el programa principal, i funcions auxiliars  <----
}
