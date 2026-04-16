#include <iostream>
#include <string>
#include <vector>
using namespace std;


string guanyador(const vector<string>& nom, const vector<bool>& guanya);


int main() {
  int m;
  while (cin >> m) {
    vector<string> V(m);
    for (int i = 0; i < m; ++i) cin >> V[i];
    vector<bool> A(m - 1);
    for (int i = 0; i < m - 1; ++i) {
      int x;
      cin >> x;
      A[i] = x;
    }

    cout << guanyador(V, A) << endl;
    for (int i = 0; i < m - 1; ++i) {
      A[i] = not A[i];
      cout << guanyador(V, A) << endl;
      A[i] = not A[i];
    }
    cout << endl;
  }
  return 0;
}
