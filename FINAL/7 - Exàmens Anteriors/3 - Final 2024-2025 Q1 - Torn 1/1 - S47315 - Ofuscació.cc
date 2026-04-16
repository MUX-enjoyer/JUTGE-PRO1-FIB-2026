
#include <iostream>
#include <string>

using namespace std;

/* 
 * PRE: s.size() > 0 i 0 <= n <= 20 i tot caràcter d's és entre 'A' i 'F'.
 * POST: l'ofuscació de s respecte a n
 */
 void ofuscacio(int n,string s);

int main()
{
	int n;
	string s;
	while (cin >> n >> s) 
	{
		ofuscacio(n,s);
		cout << endl;
	}
	
	return 0;
}
