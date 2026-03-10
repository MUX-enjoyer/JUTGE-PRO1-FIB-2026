#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief   Retorna un vector amb els nombres de repeticions de les vocals
 *          de la paraula, per ordre d'aparició.
 *
 * Exemples:
 *   vowel_streaks("eeoo") -> [2, 2]
 *   vowel_streaks("aeiou") -> [1, 1, 1, 1, 1]
 *   vowel_streaks("paraaulaaa") -> [1, 3, 1, 3]
 *   vowel_streaks("aaaabrakadaaavraaaa") -> [4, 1, 1, 3, 4]
 *
 * @returns Un vector d'enters a on cada enter v[i] és el nombre de repeticions
 *          de la vocal (i+1)-èssima.
 *
 * @pre     `word` està formada per caràcters en minúscules i pot ser una
 *          paraula no "extruida"
 */
vector<int> vowel_streaks(string word);

int main() {
	string word;
	while (cin >> word) {
		vector<int> streaks = vowel_streaks(word);
		if (streaks.empty()) {
			cout << "-" << endl;
		} else {
			cout << streaks[0];
			for (int i = 1; i < streaks.size(); i++) {
				cout << " " << streaks[i];
			}
			cout << endl;
		}
	}
	return 0;
}
