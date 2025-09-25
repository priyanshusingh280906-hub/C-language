#include <stdio.h>

int main()
{
    int Physics, Chemistry, Maths, Total;
    printf("Enter the marks of Physics\n");
    scanf("%d", &Physics);
    printf("Enter the marks of  Chemistry\n");
    scanf("%d", &Chemistry);
    printf("Enter the marks of Maths\n");
    scanf("%d", &Maths);
    Total = (Physics + Chemistry + Maths)/3;
    if (Total >= 40 && Physics >= 33 && Chemistry >= 33 && Maths >= 33)
    {
        printf("you are passed");
    }
    else
    {
        printf("you are failed\n");
    }
    return 0;
}