#include <stdio.h>

int main()
{
    int a = 97;
    int b;
    printf("Enter the number\n");
    scanf("%d", &b);
    printf("%d", a % b);
    return 0;
}