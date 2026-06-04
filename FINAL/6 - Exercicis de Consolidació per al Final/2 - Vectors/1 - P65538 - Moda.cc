#include <iostream>
#include <vector>
using namespace std;

struct freq_paraules {
    string paraula;
    int freq;
};

int main() {
    int n;
    while(cin >> n && n != 0) {
        vector<freq_paraules> v;

        for (int i = 0; i < n; ++i) {
            string p;
            cin >> p;

            bool trobat = false;
            for (int j = 0; j < v.size() && !trobat; ++j) {
                if (p == v[j].paraula) {
                    ++v[j].freq;
                    trobat = true;
                }
            }

            if (!trobat) {
                freq_paraules fp;
                fp.paraula = p;
                fp.freq = 1;
                v.push_back(fp);
            }

        }

        int freq_max = 0;
        string paraula_amb_freq_max;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i].freq > freq_max) {
                freq_max = v[i].freq;
                paraula_amb_freq_max = v[i].paraula;
            }
            else if (v[i].freq == freq_max && v[i].paraula < paraula_amb_freq_max) {
                freq_max = v[i].freq;
                paraula_amb_freq_max = v[i].paraula;
            }
        }

        cout << paraula_amb_freq_max << endl;
    }
}