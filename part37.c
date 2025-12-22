#include <stdio.h>
#include <string.h>

int main()
{
    char a[]="My name is Priyanshu Singh";
    int i=0;
    while (a[i]!=0)
    {
        printf("%c", a[i]);
        i++;
    }
    
    return 0;
}