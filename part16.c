#include <stdio.h>

int main()
{
    int a, product = 1, i = 1;
    printf("Enter the number:\n");
    scanf("%d", &a);
    while (i <= a)
    {
        product = product * i;
        i++;
    }

    printf("The factorial is %d", product);
    return 0;
}