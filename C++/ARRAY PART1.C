#include <stdio.h>
int main()
{
    int a[3], sum = 0, i;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for (int i = 0; i < 3; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is = %d", sum);
    printf("The Avg is = %d", sum / 3);

    return 0;
}