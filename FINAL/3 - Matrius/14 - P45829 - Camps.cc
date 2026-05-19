#include <iostream>
#include <vector>
using namespace std;

int comptar_camps(const vector<vector<int>>& camps, vector<vector<bool>>& visitats) {
    int cont = 0;

    for (int i = 0; i < camps.size(); ++i) {
        for (int j = 0; j < camps[0].size(); ++j) {

            if (camps[i][j] != 0 && !visitats[i][j]) {
                ++cont;

                // Recorro tot el quadrat per marcar-lo com a visitat
                for (int i_aux = i; i_aux < camps.size() && camps[i_aux][j] != 0; ++i_aux) {
                    for (int j_aux = j; j_aux < camps[0].size() && camps[i_aux][j_aux] != 0; ++j_aux) {
                        visitats[i_aux][j_aux] = true;
                    }
                }
            }
        }
    }

    return cont;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        vector<vector<int>> camps(m, vector<int>(n));

        // Llegeixo matriu
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> camps[i][j];
            }
        }

        // Construeixo matriu auxiliar per comptar camps
        vector<vector<bool>> visitats(m, vector<bool>(n, false));

        cout << comptar_camps(camps, visitats) << endl;
    }
}