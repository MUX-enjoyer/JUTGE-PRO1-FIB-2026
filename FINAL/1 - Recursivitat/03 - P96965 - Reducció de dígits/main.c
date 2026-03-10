#include <stdio.h>

int reduccio_digits(int x);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%d\n", reduccio_digits(n));
    }
    return 0;
}
