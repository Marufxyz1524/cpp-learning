#include <stdio.h>
int main()
{
    int num[100], n, max;
    printf("How many input numbers you will takes: ");
    scanf("%d", &n);

    printf("Takes the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    printf("Maximum number is = %d", max);

    return 0;
}