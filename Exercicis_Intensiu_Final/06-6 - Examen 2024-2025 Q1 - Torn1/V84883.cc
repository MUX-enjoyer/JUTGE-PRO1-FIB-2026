#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
/*
    PRE: v és un vector R, left = 0, right = v.size() - 1.
    POST: torna la posició de y_1 a v.
*/
int vectorRaux (const vector<int>& v, int left, int right) {
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (mid == 0 || mid == v.size() - 1) return mid;
    if (v[mid] < v[mid - 1] && v[mid] < v[mid - 1]) return mid;

    if (v[mid] < v[0]) return vectorRaux(v, left, mid -  1);
    else return vectorRaux(v, mid + 1, right);
}

/*
 * PRE:  v és un vector R. |v| >= 3
 * POST: torna la posició de y_1 a v.
 */
int vectorR(const vector<int>& v) {
    return vectorRaux(v, 0, v.size() - 1);
}
