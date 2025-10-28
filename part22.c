#include <stdio.h>

float force(float);

float force(float a)
{
    return a * (9.8);
}

int main()
{
    float mass;
    printf("Enter the mass to get the force\n");
    scanf("%f", &mass);
    printf("The force on the %f kg mass is %f N", mass, force(mass));
    return 0;
}