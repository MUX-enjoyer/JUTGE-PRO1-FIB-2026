#include <stdio.h>

int es_perfecte(int x);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%s\n", es_perfecte(n) ? "true" : "false");
    }
    return 0;
}
