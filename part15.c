#include <stdio.h>

int main()
{
    int a, product = 1;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        product = product * i;
    }
    printf("The factorial is %d", product);
    return 0;
}