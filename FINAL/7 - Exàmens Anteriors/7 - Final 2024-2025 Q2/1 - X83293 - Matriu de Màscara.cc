
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;
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
Matrix apply_mask(const Matrix& M, const Mask& K);

bool read_matrix_and_mask(Matrix& matrix, Mask& mask) {
	int rows, cols;
	if (!(cin >> rows >> cols)) {
		return false;
	}
	matrix = Matrix(rows, vector<int>(cols));
	mask = Mask(rows, vector<bool>(cols));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
		for (int j = 0; j < cols; j++) {
			int n;
			cin >> n;
			mask[i][j] = (n == 1);
		}
	}

	return !cin.eof();
}

void show_matrix(const Matrix& M) {
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
	Matrix matrix;
	Mask mask;
	while (read_matrix_and_mask(matrix, mask)) {
		show_matrix(apply_mask(matrix, mask));
	}
	return 0;
}