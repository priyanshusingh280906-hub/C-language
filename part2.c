#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter the temperature in celsius degree\n");
    scanf("%f", &celsius);
    printf("The fahrenheit temperature is %f", ((9*celsius)/5)+35);
    return 0;
}