#include <stdio.h>

int main()
{
    int Income;
    printf("Enter your income\n");
    scanf("%d", &Income );
    if (Income>1000000)
    {
        printf("You have to pay 30%% tax\n");
    }
    else if (Income>500000 && Income<1000000)
    {
        printf("You have to pay 20%% tax\n");
    }
     else if (Income>250000 && Income<500000)
    {
        printf("You have to pay 5%% tax\n");
    }
    else
    {
        printf("You have to pay no tax\n");
    }
    
    return 0;
}