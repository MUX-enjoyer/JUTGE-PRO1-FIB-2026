#include <stdio.h>

int es_capicua(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", es_capicua(n) ? "true" : "false");
	}
	return 0;
}
