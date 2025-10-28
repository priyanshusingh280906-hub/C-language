#include <stdio.h>

int main()
{
    int p;
    printf("Enter you want in array:-\n");
    scanf("%d", &p);
    int a[p];
    printf("Enter the number in respective order\n");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }

    int *ptr = &a[0];
    for (int j = 0; j < p; j++)
    {
        printf("%p\n", ptr);
    }

    return 0;
}

// one more question is pending that if i want to print only one address according to the user