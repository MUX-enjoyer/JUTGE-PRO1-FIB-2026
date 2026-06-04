#include <iostream>
using namespace std;

bool es_palindrom(string s) {
    int i = 0;
    int j = s.size()-1;

    while(i != j && i < j) {
        if (s[i] != s[j]) return false;

        ++i;
        --j;
    }

    return true;
}

int main() {

}