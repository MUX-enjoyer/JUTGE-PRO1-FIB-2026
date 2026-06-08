#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Search {
    string word;
    int stime;
};

// Pre: n >= 0
// Post: lee de la entrada una secuencia S de n búsquedas y retorna
//       esa información almacenada en un vector de Search
vector<Search> read_data(int n) {
    vector<Search> v(n);
    for (int i = 0; i < n; i++) {
        string word;
        int stime;
        cin >> word >> stime;
        v[i].word = word;
        v[i].stime = stime;
    }
    return v;
}

// Pre: -
// Post: retorna el tiempo de respuesta más lento de la palabra p  
//       en v (si existe), o 0 en caso contrario
int tiempo_maximo(const vector<Search>& v, string p) {
    int max_time = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].word == p) {
            max_time = max(max_time, v[i].stime);
        }
    }
    return max_time;
}

int main() {
    int n;
    cin >> n;
    vector<Search> searches = read_data(n);

    string s;
    while (cin >> s) {
        cout << tiempo_maximo(searches, s) << endl;
    }
}