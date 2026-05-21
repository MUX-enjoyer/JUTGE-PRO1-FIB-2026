#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    int n_files = r.size();
    int n_cols  = r[0].size();

    int min_fila = -1, max_fila = -1;
    int min_col  = -1, max_col  = -1;

    // Primera i última fila que contenen c
    for (int i = 0; i < n_files and min_fila == -1; ++i)
        for (int j = 0; j < n_cols and min_fila == -1; ++j)
            if (r[i][j] == c) min_fila = i;

    for (int i = n_files-1; i >= 0 and max_fila == -1; --i)
        for (int j = 0; j < n_cols and max_fila == -1; ++j)
            if (r[i][j] == c) max_fila = i;

    // Primera i última columna que contenen c
    for (int j = 0; j < n_cols and min_col == -1; ++j)
        for (int i = 0; i < n_files and min_col == -1; ++i)
            if (r[i][j] == c) min_col = j;

    for (int j = n_cols-1; j >= 0 and max_col == -1; --j)
        for (int i = 0; i < n_files and max_col == -1; ++i)
            if (r[i][j] == c) max_col = j;

    fils = max_fila - min_fila + 1;
    cols = max_col  - min_col  + 1;
}