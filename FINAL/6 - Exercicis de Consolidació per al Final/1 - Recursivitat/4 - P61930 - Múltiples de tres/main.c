#include <stdio.h>

int es_multiple_3(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", es_multiple_3(n) ? "true" : "false");
	}
	return 0;
}
