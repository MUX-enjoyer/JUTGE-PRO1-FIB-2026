using namespace std;
#include <iostream>
#include <vector>
    
bool diags_creixents(const vector<vector<int>>& m, int f, int c) {
    // Diagonal a dalt-esq
    for (int i = f - 1, j = c - 1; i >= 0 && j >= 0 && i < m.size() && j < m[0].size(); --i, --j) {
        if (m[i][j] <= m[i+1][j+1]) return false;
    }

    // Diagonal a dalt-dreta
    for (int i = f - 1, j = c + 1; i >= 0 && j >= 0 && i < m.size() && j < m[0].size(); --i, ++j) {
        if (m[i][j] <= m[i+1][j-1]) return false;
    }

    // Diagonal a baix-esq
    for (int i = f + 1, j = c - 1; i >= 0 && j >= 0 && i < m.size() && j < m[0].size(); ++i, --j) {
        if (m[i][j] <= m[i-1][j+1]) return false;
    }

    // Diagonal a baix-dreta
    for (int i = f + 1, j = c + 1; i >= 0 && j >= 0 && i < m.size() && j < m[0].size(); ++i, ++j) {
        if (m[i][j] <= m[i-1][j-1]) return false;
    }

    return true;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        vector<vector<int>> m(f, vector<int>(c));
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> m[i][j];
            }
        }

        int f_elem, c_elem;
        cin >> f_elem >> c_elem;
        if (diags_creixents(m, f_elem, c_elem)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}