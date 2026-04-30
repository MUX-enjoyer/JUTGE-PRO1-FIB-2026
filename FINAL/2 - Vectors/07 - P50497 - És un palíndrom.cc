#include <iostream>
#include <string>
using namespace std;


bool es_palindrom_verbose(const string& s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < s.size()/ 2) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }

    return true;
}

bool es_palindrom(const string& s) {
    for (int i = 0; i < s.size()/ 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) return false;
    }
    return true;
}


int main() {
    string s;
    while (cin >> s) {
      cout << es_palindrom(s) << endl;
      int n = s.size();
      if (n > 100) {
        char c = s[0];
        s[0] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[0] = c;

        c = s[1];
        s[1] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[1] = c;

        c = s[3];
        s[3] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[3] = c;

        c = s[n-1];
        s[n-1] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-1] = c;

        c = s[n-2];
        s[n-2] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-2] = c;

        c = s[n-7];
        s[n-7] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-7] = c;
      }
    }
    return 0;
}
