/*
#include <stdio.h>

int main() 
{
    int a, sum=1, b, c=10, d=10, e=1, f=0, g, h=1, i;
    printf("Enter the number:-\n");
    scanf("%d", &a);
    while (c<=a)
    {
        b=a%c;
        sum=sum+1;
        c=c*10;
    }
    printf("%d\n", sum);
    g=sum-2;
    while (f<=g)
    {
        e=d*e;
        f=f+1;
    }
    printf("%d\n", e);

    while (h<=a)
    {
        h=a/h;
        printf("%d\n", h);
        h=h*10;  
    }
    
    return 0;
}
*/

/*


#include <stdio.h> 

int main() 
{ 
    int a; 
    printf("Enter the number:-\n"); 
    scanf("%d", &a); 
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", a * i);
    }
    
    
    return 0; 
}
*/



/*

#include <stdio.h>

int main()
{
    int a; 
    printf("Enter the number:-\n"); 
    scanf("%d", &a); 
    for (int i = a; i > 0; i--)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
*/



/*
#include <stdio.h>

int main()
{
    int a, b=1;
    printf("Enter the number:-\n"); 
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b=b*i;
    }
    printf("Factorial is %d\n", b);

    return 0;
}
*/


/*
#include <stdio.h>

int factorial(int);

int factorial(int a)
{
    int fact = 1;
    for (int i = 0; i < a; i++)
    {
        fact = fact * (i + 1);
    }
    printf("%d\n", fact);
    return fact;
}

int main()
{
    int a, result;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    result = factorial(a);
    printf("Sum is %d\n", result);  
    return 0;
}
*/


/*
#include <stdio.h>

int fact(int);

int fact(int a)

{
    if (a ==0 || a == 1)
    return 1; 
    else
    return a * fact(a-1);
}

int main()
{
    int a, result;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    result = fact(a);
    printf("Sum is %d\n", result); 
    return 0;
}
*/



/*
#include <stdio.h>

int naturalnum(int);

int naturalnum(int a)
{
    if (a==1)
    return 1;
    else
    return a + naturalnum(a-1);
}

int main()
{
    int a, result;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    result = naturalnum(a);
    printf("Sum is %d\n", result); 
    return 0;
}
*/



/*
#include <stdio.h>

int naturalnum(int);

int naturalnum(int a)
{
    if (a==0)
    return 0;
    else
    printf("%d\n", a);
    return naturalnum(a-1);
}

int main()
{
    int a, result;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    result = naturalnum(a);
    return 0;
}
*/



/*
#include <stdio.h>

int aster(int);

int aster(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int a;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    printf("Pattern is:-\n");
    aster(a);
    return 0;
}
*/



/*
#include <stdio.h>

int main()
{
    int a;
    int *j;
    j=&a;
    printf("Enter a number:-\n");
    scanf("%d", &a);
    printf("%u\n", j);
    printf("%d", *j);
    return 0;
}
*/



#include <stdio.h>

int powmin(int);

int powmin(int a)
{
    int*k;
    k=&a;
    printf("%d", k);
    return 0;
}

int main()
{
    int b=4;
    int*p;
    p=&b;
    printf("%d\n", p);
    powmin(b);
    return 0;
}