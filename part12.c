#include <stdio.h>

int main()
{
    int a, b, c=0;
    printf("Enter the number:\n");
    scanf("%d", &a);
    do
    {
        c=c+b;
        b++;
    } while (b<=a);
    printf("The sum is %d", c);
    
    return 0;
}