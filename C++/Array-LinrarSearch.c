#include <stdio.h>
int main()
{
    int key, found = 0;
    int a[5] = {10, 46, 67, 45, 3};
    printf("Enter the key number: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Not found at index");
    }

    return 0;
}