#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

vector<string> csv_line_split(string line, char sep);

void show_cells(const vector<string>& cells) {
	cout << '[';
	if (!cells.empty()) {
		cout << '"' << cells[0] << '"';
		for (int i = 1; i < cells.size(); i++) {
			cout << ", " << '"' << cells[i] << '"';
		}
	}
	cout << ']' << endl;
}

int main() {
	string line1, line2;
	while (getline(cin, line1) && getline(cin, line2)) {
		assert(line1.size() == 1);
		show_cells(csv_line_split(line2, line1[0]));
	}
    return 0;
}