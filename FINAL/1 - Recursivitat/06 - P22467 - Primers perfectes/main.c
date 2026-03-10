#include <stdio.h>

int es_primer_perfecte(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", es_primer_perfecte(n) ? "true" : "false");
	}
	return 0;
}
