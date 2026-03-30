#include <stdio.h>

int main()
{
    int n, i;

    printf("How many terms: ");
    scanf("%d", &n);

    int fib[n]; // array declare

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // print করা
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
    }

    return 0;
}