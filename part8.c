#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; n--) // for(i=n; i; i--)
    {
        printf("%d\n", n);
    }

    return 0;
}