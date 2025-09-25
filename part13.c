#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        b = b + i;
    }
    printf("The sum is %d", b);
    return 0;
}