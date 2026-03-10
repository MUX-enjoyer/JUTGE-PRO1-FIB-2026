#include <stdio.h>

int nombre_digits(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%d\n", nombre_digits(n));
	}
	return 0;
}
