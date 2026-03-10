#include <stdio.h>

int es_any_de_traspas(int any);

int main()
{
    int a;
    while (scanf("%d", &a) > 0) {
        printf("%s\n", es_any_de_traspas(a) ? "true" : "false");
    }
    return 0;
}
