#include <stdio.h>

int main()
{
    int Class, Marks;

    printf("Enter the Class you are in\n");
    scanf("%d", &Class);

    printf("Enter the Total marks you have got\n");
    scanf("%d", &Marks);

   switch (Class)
   {
   case 1:
    switch (Marks)
    {
    case 8:
        printf("You are passed");
        break;
    
    default:
        printf("You are failed");
        break;
    }
    break;

    case 2:
    switch (Marks)
    {
    case 8:
        printf("You are passed");
        break;
    
    default:
        printf("You are failed");
        break;
    }
    break;
   
   default:
    break;
   }

    return 0;
}
