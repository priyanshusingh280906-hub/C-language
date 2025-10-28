#include <stdio.h>

int address(int *);

int address(int *a)
{
    printf("%p", &a);
}
int main()
{
    int i = 22;
    printf("The address of i is %p\n", &i);
    address(&i);
    return 0;
}