#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5, b;
    a+=3;
    printf("Enter the number b\n");
    scanf("%d", &b);

    printf("The answer is %d\n", a+b);
    return 0;
}