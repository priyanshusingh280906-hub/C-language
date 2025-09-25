#include <stdio.h>

int main()
{
    int n, i=1, s=0;
    printf("Enter the number:\n");
    scanf("%d", &n);

    while (i<=n)
    {
        s=s+i;
        i++;
    }
    printf("The sum is %d", s);
    return 0;
}