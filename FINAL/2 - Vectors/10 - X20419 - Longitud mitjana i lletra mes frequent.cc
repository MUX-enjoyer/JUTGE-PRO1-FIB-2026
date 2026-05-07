#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Funció per calcular la longitud mitjana de les paraules
double calculate_average_length(const vector<string>& words) {
    double total_length = 0;
    for (int i = 0; i < words.size(); ++i) {
        total_length += words[i].size();
    }
    return total_length / words.size();
}

// Funció per trobar la lletra més freqüent en paraules amb longitud >= mitjana
char lletra_mes_frequent(const vector<string>& words, double average_length) {
    vector<int> frequencia(26, 0); // Comptador per lletres 'a' a 'z'
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].length() >= average_length) {
            for (char c : words[i]) {
                if (c >= 'a' && c <= 'z') {
                    frequencia[c - 'a']++;
                }
            }
        }
    }
    char most_frequent_letter = 'a';
    int max_frequency = 0;
    for (int i = 0; i < 26; ++i) {
        if (frequencia[i] > max_frequency) {
            max_frequency = frequencia[i];
            most_frequent_letter = 'a' + i;
        }
    }
    return most_frequent_letter;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    // Calcular i mostrar la longitud mitjana
    double average_length = calculate_average_length(words);
    cout << average_length << endl;

    // Trobar i mostrar la lletra més freqüent
    char most_frequent_letter = lletra_mes_frequent(words, average_length);
    cout << most_frequent_letter << endl;
}