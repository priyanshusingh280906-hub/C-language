#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("%d is a prime number\n", a);
            break;
        }
        else
        {
            printf("%d is not a prime number\n", a);
        }
    }

    return 0;
}