#include <stdio.h>

int main()
{
    int a, b = 8; // humlog b ko bas condition check karne ke liya hai
    printf("Enter the number:\n");
    scanf("%d", &a);
    if (a == 1 || a == 0)
    {
        printf("%d is not a prime number", a);
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0 && a != 2)
            {
                b = 2; // like condition true hua toh b ka valur 2 ho jayega
            }
        }
        if (b == 2) // aur == means equals to
        {
            printf("%d is not a prime number\n", a);
        }
        else // agar b==2 nahi hua to to condition false hoga aur b==8 ho jayega aur else statment print ho jayega
        {
            printf("%d is a prime number\n", a);
        }
    }
    return 0;
}