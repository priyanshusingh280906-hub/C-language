#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= 2 * i - 1; p++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}