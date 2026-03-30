#include <stdio.h>

int main()
{
    /*
  //ARRAY USER INPUT
  int marks[10];
  for (int i = 0; i <= 3; i++)
  {
      scanf("%d", &marks[i]);  //%D ER POR KOKHONO SPACE DEOA JABENA
  }
*/

    // PRINTING ARRAY---
    /*int marks[5] = {55, 45, 54, 54};

    for (int i = 0; i < 4; i++)
    {
        printf("The marks is = %d\n", marks[3]);
    }
        */
    int num[100], n;
    printf("How many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {

        printf("Enter Number is %d : ", i);
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for (int i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("The maxmimun value is : %d\n", max);

    return 0;
}