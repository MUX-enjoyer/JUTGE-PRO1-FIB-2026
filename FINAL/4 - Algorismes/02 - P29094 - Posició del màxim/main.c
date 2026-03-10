#include <stdio.h>

int posicio_maxim(double v[], int m);

int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) > 0) {
    double v[n];
    for (int i = 0; i < n; ++i) scanf("%lf", &v[i]);
    printf("%d\n", posicio_maxim(v, m));
	}
	return 0;
}
