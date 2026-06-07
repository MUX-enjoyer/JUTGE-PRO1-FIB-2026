
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
 * PRE:  v és un vector R, i pos és la posició de y_1 a v.
 * POST: v està ordenat.
 */

void ordena(vector<int>& v, int pos) {
  int n = v.size();

  for (int i = 0; i < pos / 2; ++i) {
    swap(v[i], v[pos - 1 - i]);
  }

  for (int i = 0; i < (n - pos) / 2; ++i) {
    swap(v[pos + i], v[n - 1 - i]);
  }

  for (int i = 0; i < n / 2; ++i) {
    swap(v[i], v[n - 1 - i]);
  }
}
