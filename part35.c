#include <stdio.h>

int reverseofarray();

int reverseofarray(int array[

])
{
    for (int i = 0; i < a; a--)
    {
        printf("%d\n", array[a - i - 1]);
    }
    
}

int main()
{
    int a;
    printf("Enter the number you want in array:-\n");
    scanf("%d", &a);
    int array[a];
    printf("Enter the elements of array:-\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The elements of array are:-\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("The elements of array in reverse order are:-\n");
    reverseofarray(array[a]); 
    return 0;
}