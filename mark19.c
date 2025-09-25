#include <stdio.h>

int main()
{
    int Science, Maths;
    printf("Enter the marks you have got in Science subject\n");
    scanf("%d", &Science);

    printf("Enter the marks you have got in Maths subject\n");
    scanf("%d", &Maths);
    
    if(Science >= 25 & Maths >= 25){
        printf("You are getting 45 rupees prize for passing in both subject");
    }
    else if (Science >= 25){
        printf("You are getting 15 rupees prize for passing in Science subject");
    }
    else if (Maths >= 25){
        printf("You are getting 15 rupees prize for passing in Maths subject");
    }
    else {
        printf("you are not getting any prize since you failed in both subject");
    }
    return 0;
}