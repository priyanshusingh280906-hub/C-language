#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number you want multiplication of:\n");
    scanf("%d", &a);
    for (i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}