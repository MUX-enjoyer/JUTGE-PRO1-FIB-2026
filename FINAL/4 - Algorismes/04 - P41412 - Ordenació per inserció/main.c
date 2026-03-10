#include <stdio.h>

void ordena_per_insercio(int n, double v[n]);

int main()
{
    int n, i;
    while (scanf("%d", &n) > 0) {
        double v[n];
        for (i = 0; i < n; ++i)
            scanf("%lf", &v[i]);
        ordena_per_insercio(n, v);
        for (i = 0; i < n; ++i)
            printf(" %.4lf", v[i]);
        printf("\n");
    }
    return 0;
}
