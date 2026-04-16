#include <iostream>
#include <vector>
using namespace std;


string sortida(int p, vector<int>& v);


int main() {
  int p, n;
  while (cin >> p >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << sortida(p, v) << endl;
  }
  return 0;
}
