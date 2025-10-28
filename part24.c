#include <stdio.h>

int sum_of_n_natural_number(int);

int sum_of_n_natural_number(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_of_n_natural_number(n - 1) + n;
}

int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d", &n);
    printf("%d", sum_of_n_natural_number(n));
    return 0;
}