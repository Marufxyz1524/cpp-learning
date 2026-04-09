#include <stdio.h>
int main()
{ // input elements
    int A[3][4];
    printf("Enter your elements: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix : A = \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}