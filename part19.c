#include <stdio.h>

float average(float , float , float );

float average(float a, float b, float c)
{
    printf("The average is %f", (a+b+c)/3);
    return (a+b+c)/3;
}

int main()
{
    float a, b, c;
    printf("Enter the number you want average of:-\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    average(a,b,c);
    return 0;
}