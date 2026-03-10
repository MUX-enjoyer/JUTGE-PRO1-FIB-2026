
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;
typedef vector<vector<bool>> Mask;

/**
 * @brief Retorna una nova matriu que és `M` aplicant la
 * màscara `K`. La màscara és una matriu que té caselles de tipus
 * `bool`, i quan una casella de la màscara és `false`, cal
 * deixar la casella anàloga (mateixa fila i columna) de `M` a 0,
 * altrament no cal fer res.
 *
 * @param `K` la matriu de màscara
 * @param `M` la matriu d'interès (d'enters)
 *
 * @returns  La matriu resultat d'aplicar `K` a `M`
 */
bool permutacio(const Matriu& A, const Matriu& B);

bool read_matrix(Matriu& A, Matriu& B) 
{	
	int rows, cols;
	
	if (!(cin >> rows >> cols)) {return false;}
	
	A = Matriu(rows, vector<int>(cols));
	B = Matriu(rows, vector<int>(cols));
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> A[i][j];
		}
		for (int j = 0; j < cols; j++) {
			cin >> B[i][j];
		}
	}

	return !cin.eof();
}

void show_matrix(const Matriu& M) {
	for (int i = 0; i < M.size(); i++) {
		cout << M[i][0];
		for (int j = 1; j < M[i].size(); j++) {
			cout << ' ' << M[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	Matriu A,B;
	while (read_matrix(A,B)) {
//		show_matrix(A);
//		show_matrix(B);

		cout << (permutacio(A,B)? "SI" : "NO") << endl;
	}
	return 0;
}
