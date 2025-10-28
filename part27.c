#include <stdio.h>

int main()
{
    int a=2;
    int * j= &a;
    printf("%p\n", j);
    printf("%d", *&a);
    return 0;
}