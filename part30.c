#include <stdio.h>

int main()
{
    int p,q;
    printf("Enter you want in array:-\n");
    scanf("%d", &p);
    int a[p];
    printf("Enter the number in respective order\n");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int* ptr= &a[q];
    printf("Enter the number you want array of:-\n");
    scanf("%d", &q);
    printf("The address of %d is %p", *ptr, ptr);
    return 0;
} 

