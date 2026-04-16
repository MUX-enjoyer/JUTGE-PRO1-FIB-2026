
#include <iostream>
#include <string>

using namespace std;

// PRE: n > 0 i n = d1,d2,d3,... dn i n és parell, 
//      i 65 <= d1d2 <= 90, 65 <= d3d4 <= 90, etc...
// POST: escriu pel canal de sortida (cout) la decodificació de n
void decodificacio(int n);


int main()
{
	int n;
	while (cin >> n) 
	{
		decodificacio(n);
		cout << endl;
	}
	
	return 0;
}



