#include <stdio.h>
/* mark 16 me hum do do baar printf use kar raha tha but in mark17, mujhe pata chala ki humlog %d(format specifier) 
kitni baar bhi use kar sakta hai lekin humlog ko format specifier ko specify karna hoga wo line se */
int main()
{
    int a;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);
    printf("Table of %d : \n", a);
    printf("%d * 1 = %d\n", a, a*1);

    printf("%d * 2 = %d\n", a, a*2);

    printf("%d * 3 = %d\n", a, a*3);

    printf("%d * 4 = %d\n", a, a*4);

    printf("%d * 5 = %d\n", a, a*5);

    printf("%d * 6 = %d\n", a, a*6);

    printf("%d * 7 = %d\n", a, a*7);

    printf("%d * 8 = %d\n", a, a*8);

    printf("%d * 9 = %d\n", a, a*9);

    printf("%d * 10 = %d\n", a, a*10);

    return 0;
}
