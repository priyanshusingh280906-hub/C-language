#include <stdio.h>

int asterisk(int);

int asterisk(int a)
{
    if (a==1)
    {
        return 1;
    }
    
    return (asterisk(a-1) + a); 
}

int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", asterisk(i));
    }
    
    return 0;
}