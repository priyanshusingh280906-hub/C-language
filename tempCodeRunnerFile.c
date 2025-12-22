#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter the sentence:-\n");
    char a[50];
    fgets(a, 50, stdin);
    int b= strlen(a);
    printf("All the vowels in the string is:-\n");
    for (int i = 0; i < b; i++)
    {
        if (a[i]== 'a' || a[i]== 'e' || a[i]== 'i' || a[i]== 'o' || a[i]== 'u' || a[i]== 'A' || a[i]== 'E' || a[i]== 'I' || a[i]== 'O' || a[i]== 'U')
        {
            printf("%c  ", a[i]);
        }
        
    }

    printf("\nAll the consonent in the string is:-\n");
    for (int i = 0; i < b; i++)
    {
        if (a[i]!= 'a' && a[i]!= 'e' && a[i]!= 'i' && a[i]!= 'o' && a[i]!= 'u' && a[i]!= 'A' && a[i]!= 'E' && a[i]!= 'I' && a[i]!= 'O' && a[i]!= 'U' && a[i]!=' ')
        {
            printf("%c  ", a[i]);
        }
        
    }
    
    return 0;
}