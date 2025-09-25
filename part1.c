#include <stdio.h>

int main()
{
    float radius;
    float pie = 3.14;
    printf("The radius of the circle\n");
    scanf("%f", &radius);
    printf("THe area of the circle is %.4f\n", pie * radius * radius); //%a.bf a number point and b is decimal point
    float height;
    printf("The height of the cylinder\n");
    scanf("%f", &height);
    printf("The volume of the cylinder is %.4f", pie * radius * radius * height);
    return 0;
}