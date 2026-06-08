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

int binary_search(int l, int r, const vector<Search>& v, string p) {
    if (l > r) return -1;

    int m = (l + r) / 2;
    if (v[m].word == p) {
        if (v[m-1].word != v[m].word) {
            return v[m].stime;
        }
        else return binary_search(l, m - 1, v, p);
    }

    else if (v[m].word < p) return binary_search(m + 1, r, v, p);

    else return binary_search(l, m - 1, v, p);
}

// Pre: -
// Post: retorna el tiempo de respuesta más lento de la palabra p  
//       en v (si existe), o 0 en caso contrario
int tiempo_maximo(const vector<Search>& v, string p) {
    int result = binary_search(0, v.size() - 1, v, p);
    return result == -1 ? 0 : result;
}

bool cmp(const Search& a, const Search& b) {
    if (a.word < b.word) return true;

    else if (a.word == b.word) {
        if (a.stime > b.stime) return true;
        else return false;
    }

    // b.word < a.word
    else return false;
}

int main() {
    int n;
    cin >> n;
    vector<Search> searches = read_data(n);

    sort(searches.begin(), searches.end(), cmp);

    string s;
    while (cin >> s) {
        cout << tiempo_maximo(searches, s) << endl;
    }
}