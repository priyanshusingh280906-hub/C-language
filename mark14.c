#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form 

Example:
Enter the number you want multiplication table of:
6
Output:
Table of 6: 
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
*/

int main()
{
    int a;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);
    
    printf("Table of %d : \n", a*1);
    printf("%d\n", a*2);
    printf("%d\n", a*3);
    printf("%d\n", a*4);
    printf("%d\n", a*5);
    printf("%d\n", a*6);
    printf("%d\n", a*7);
    printf("%d\n", a*8);
    printf("%d\n", a*9);
    printf("%d\n", a*10);
    return 0;
}
