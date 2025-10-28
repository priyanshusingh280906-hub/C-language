#include <stdio.h>

int main()
{
    int a;
    printf("Enter the total number\n");
    scanf("%d", &a);
    int number[a];
    int *ptr = &number[a];
    printf("Enter the number:-\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &number[i]);
    }
    return 0;
}