#include <stdio.h>

float farhenheit(float);

float farhenheit(float a)
{
    return ((9 * a) / 5) + 32;
}

int main()
{
    float celsius;
    printf("Enter the temperature in celsius degree\n");
    scanf("%f",&celsius);
    printf("In farhenheit the temperature is %f", farhenheit(celsius));
    return 0;
}