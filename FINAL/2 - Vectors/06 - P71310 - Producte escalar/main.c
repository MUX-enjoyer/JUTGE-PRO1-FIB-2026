#include <stdio.h>

double producte_escalar(int n, double u[n], double v[n]);

int main()
{
    int i, n;
    while (scanf("%d", &n) > 0) {
        double u[n];
        double v[n];
        for (i = 0; i < n; ++i)
            scanf("%lf", &u[i]);
        for (i = 0; i < n; ++i)
            scanf("%lf", &v[i]);
        printf("%.4lf\n", producte_escalar(n, u, v));
    }
    return 0;
}
