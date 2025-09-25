#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the number a\n");
    scanf("%d", &a);

    printf("Enter the number b\n");
    scanf("%d", &b);

    printf("The answer is %d\n", a%b);
    return 0;
}