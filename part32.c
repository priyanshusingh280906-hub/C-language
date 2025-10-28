#include <stdio.h>

int main()
{
    int a, c, multiplication[10];
    printf("Enter the number you want multiplication of:-\n");
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        multiplication[i] = a * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", a, i + 1, multiplication[i]);
    }

    return 0;
}