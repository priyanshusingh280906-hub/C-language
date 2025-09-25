#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f;
    printf("Enter number a\n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("Enter number c\n");
    scanf("%d", &c);

    printf("Enter number d\n");
    scanf("%d", &d);
    
    printf("Enter number e\n");
    scanf("%d", &e);
    
    printf("Enter number f\n");
    scanf("%d", &f);

    printf("the answer is %d\n", a+b-c*d/e+f);
    
    return 0;
}
