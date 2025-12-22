#include <stdio.h>

int main()
{
    char a[]="Priyanshu Singh";
    int i=0;
    while (a[i]!=0)
    {
        i++;
    }
    i++;
    printf("Copying the array:-\n");
    char b[i];
    for (int j = 0; j < i; j++)
    {
        b[j]=a[j];
    }
    puts(b);
    return 0;
}