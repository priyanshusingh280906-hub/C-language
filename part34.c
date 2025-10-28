#include <stdio.h>

int main()
{
    int a, p, array[p];
    printf("Enter the number you want in array:-\n");
    scanf("%d", &p);
    printf("The number in the array is:-\n");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        if (array[i] > 0)
        {
            printf("The positive number in array is:-\n %d \n", array[i]);
        }
    }

    return 0;
}