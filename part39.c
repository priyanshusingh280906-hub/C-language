#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of element you want in array:-\n");
    scanf("%d", &a);
    printf("Enter the element in array:-\n");
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n=0, arr1[a];
    for (int j = 0; j < a; j++)
    {
        int dubli=0;
        for (int k = 0; k < a && k!= j; k++)
        {
            if (arr[j]==arr[k])
            {
                dubli=1;
            }
        }
        if (dubli==0)
        {
            arr1[n]=arr[j];
            n++;
        }
        
    }
    
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr1[l]);
    }
    
    return 0;
}