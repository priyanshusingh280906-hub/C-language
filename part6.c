#include <stdio.h>

int main()
{
    int i = 1, p;
    printf("Enter the value:\n");
    scanf("%d", &p);
    do
    {
        printf("%d\n", i);
        i++;
    } while (p >= i);

    return 0;
}