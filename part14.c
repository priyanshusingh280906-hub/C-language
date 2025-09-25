#include <stdio.h>

int main()
{
    int a, p, s = 0;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        p = a * i;
        // s = s + a*i
        s = s + p;
    }
    printf("The sum is %d", s);
    return 0;
}