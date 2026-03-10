#include <stdio.h>

int mcd(int a, int b);

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) > 0) {
        printf("%d\n", mcd(a, b));
    }
    return 0;
}
