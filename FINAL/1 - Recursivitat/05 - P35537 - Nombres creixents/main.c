#include <stdio.h>

int es_creixent(int n);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%s\n", es_creixent(n) ? "true" : "false");
    }
    return 0;
}
