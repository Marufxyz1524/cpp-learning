#include <stdio.h>
int main()
{ // input elements

    int A[10][10], B[10][10], C[10][10];
    int numOFrows, numOFcol;
    printf("Enter numOFrows & numOFcol elements: \n");
    scanf("%d %d", &numOFrows, &numOFcol);

    printf("Enter A elements: \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter B elements: \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    // output elements
    printf("\nMatrix : A = \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // output elements
    printf("\nMatrix : B = \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            printf("%d  ", B[i][j]);
        }
        printf("\n");
    }

    printf("Enter C elements: \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }

    printf("\nMatrix : C = A + B \n");
    for (int i = 0; i < numOFrows; i++)
    {
        for (int j = 0; j < numOFcol; j++)
        {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}