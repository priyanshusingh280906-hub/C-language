// #include <stdio.h>

// int main() 
// {
//     int a, sum=1, b, c=10, d=10, e=1, f=0, g, h=1, i;
//     printf("Enter the number:-\n");
//     scanf("%d", &a);
//     while (c<=a)
//     {
//         b=a%c;
//         sum=sum+1;
//         c=c*10;
//     }
//     printf("%d\n", sum);
//     g=sum-2;
//     while (f<=g)
//     {
//         e=d*e;
//         f=f+1;
//     }
//     printf("%d\n", e);

//     while (h<=a)
//     {
//         h=a/h;
//         printf("%d\n", h);
//         h=h*10;  
//     }
    
//     return 0;
// }


// #include <stdio.h> 

// int main() 
// { 
//     int a; 
//     printf("Enter the number:-\n"); 
//     scanf("%d", &a); 
//     for (int i = 10; i > 0; i--)
//     {
//         printf("%d\n", a * i);
//     }
    
    
//     return 0; 
// }

// #include <stdio.h>

// int main()
// {
//     int a; 
//     printf("Enter the number:-\n"); 
//     scanf("%d", &a); 
//     for (int i = a; i > 0; i--)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }
// 


// 
// #include <stdio.h>

// int main()
// {
//     int a, b=1;
//     printf("Enter the number:-\n"); 
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++)
//     {
//         b=b*i;
//     }
//     printf("Factorial is %d\n", b);

//     return 0;
// }


// #include <stdio.h>

// int factorial(int);

// int factorial(int a)
// {
//     int fact = 1;
//     for (int i = 0; i < a; i++)
//     {
//         fact = fact * (i + 1);
//     }
//     printf("%d\n", fact);
//     return fact;
// }

// int main()
// {
//     int a, result;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     result = factorial(a);
//     printf("Sum is %d\n", result);  
//     return 0;
// }


// #include <stdio.h>

// int fact(int);

// int fact(int a)

// {
//     if (a ==0 || a == 1)
//     return 1; 
//     else
//     return a * fact(a-1);
// }

// int main()
// {
//     int a, result;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     result = fact(a);
//     printf("Sum is %d\n", result); 
//     return 0;
// }
// */



// /*
// #include <stdio.h>

// int naturalnum(int);

// int naturalnum(int a)
// {
//     if (a==1)
//     return 1;
//     else
//     return a + naturalnum(a-1);
// }

// int main()
// {
//     int a, result;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     result = naturalnum(a);
//     printf("Sum is %d\n", result); 
//     return 0;
// }
// */



// /*
// #include <stdio.h>

// int naturalnum(int);

// int naturalnum(int a)
// {
//     if (a==0)
//     return 0;
//     else
//     printf("%d\n", a);
//     return naturalnum(a-1);
// }

// int main()
// {
//     int a, result;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     result = naturalnum(a);
//     return 0;
// }



// #include <stdio.h>

// int aster(int);

// int aster(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int a;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     printf("Pattern is:-\n");
//     aster(a);
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int a;
//     int *j;
//     j=&a;
//     printf("Enter a number:-\n");
//     scanf("%d", &a);
//     printf("%u\n", j);
//     printf("%d", *j);
//     return 0;
// }




// #include <stdio.h>

// int powmin(int);

// int powmin(int a)
// {
//     int*k;
//     k=&a;
//     printf("%d", k);
//     return 0;
// }

// int main()
// {
//     int b=4;
//     int*p;
//     p=&b;
//     printf("%d\n", p);
//     powmin(b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b=0;
//     printf("Enter a numbers:-\n");
//     scanf("%d", &a);

//     while (a!=0)
//     {
//         int c= a%10;
//         b=b*10+c;
//         a=a/10;
//     }
//     printf("Reverse is %d\n", b);
    
//     return 0;
// }

// 

// #include <stdio.h>

// int main()
// {
//     int a, b=0;
//     printf("Enter the number:-\n");
//     scanf("%d", &a);

//     for (int i = 2; i < a; i++)
//     {
//         if (a%i==0)
//         {
//             b=1;
//             break;
//         }
//     }
//     if (b==0)
//     {
//         printf("%d is a prime number", a);
//     }
//     else
//     {
//         printf("%d is not a prime number", a);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the number:-\n");
//     scanf("%d", &a);
//     for (int i = a; i > 0; i--)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter the two number:-\n");
//     scanf("%d %d", &a, &b);

//     for (int j = a; j <= b; j++)
//     {
//         c=1;
//         for (int i = 2; i < j; i++)
//         {
//             if (j%i==0)
//             {
//             c=0;
//             break;
//             }
            
//         }
//         if (c==1)
//         {
//             printf("%d ", j);
//         }
//     }
    

//     return 0;
// }

// 


// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int c = b[0];
//     for (int i = 1; i < a; i++)
//     {
//         if (b[i]>=c)
//         {
//             c=b[i];
//         }
        
//     }
//     printf("%d is the highest", c);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     printf("Reversed array is:-\n");
//     int c[a];
//     for (int j = 1; j <= a; j++)
//     {
//         c[j-1]=b[a-j];
//     }
//     for (int k = 0; k < a; k++)
//     {
//         printf("%d\n", c[k]);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, sum=0;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (int j = 0; j < a; j++)
//     {
//         sum=sum+b[j];
//     }
//     printf("The sum of the array is %d", sum);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, sum=0;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (int j = 0; j < a; j++)
//     {
//         sum=sum+b[j];
//     }
//     printf("The sum of the array is %d", sum/a);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, sum=0;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     printf("The odd number in the array are :-\n");
//     for (int j = 0; j < a; j++)
//     {
//         if (b[j]%2!=0)
//         {
//             printf("%d ", b[j]);
//         }  
//     }
//     printf("\n");
//     printf("The even number in the array are :-\n");
//     for (int j = 0; j < a; j++)
//     {
//         if (b[j]%2==0)
//         {
//             printf("%d ", b[j]);
//         }  
//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, c, d, e;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     c=b[0];
//     for (int i = 0; i < a; i++)
//     {
//         if (b[i]>=c)
//         {
//             c=b[i];
//         }
        
//     }
//     printf("The highest number in array is %d\n", c);
//     d=0;
//     for (int j = 0; j < a; j++)
//     {
//         if (b[j]>=d && b[j]!=c)
//         {
//             d=b[j];
//         }
        
//     }
//     printf("The second highest number in array is %d", d);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, c, d, e, f;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     c=b[0];
//     for (int i = 0; i < a; i++)
//     {
//         if (c>=b[i])
//         {
//             c=b[i];
//         }
        
//     }
//     printf("The lowest number in array is %d\n", c);
//     f=b[0];
//     for (int i = 0; i < a; i++)
//     {
//         if (b[i]>=f)
//         {
//             f=b[i];
//         }
        
//     }
//     d=f;
//     for (int j = 0; j < a; j++)
//     {
//         if (d>=b[j] && b[j]!=c)
//         {
//             d=b[j];
//         }
        
//     }
//     printf("The second lowest number in array is %d", d);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, c, d, e, f;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (int i = 0; i < a-1; i++)
//     {
//         for (int j = i+1 ; j < a; j++)
//         {
//             if (b[i]<b[j])
//             {
//                 int temp = b[i];
//                 b[i]=b[j];
//                 b[j]=temp;
//             }
            
//         }
        
//     }
//     printf("Array in ascending order:-\n");
//     for (int k = 0; k < a; k++)
//     {
//         printf("%d ", b[k]);
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, c, d, e, f;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (int i = 0; i < a-1; i++)
//     {
//         for (int j = i+1 ; j < a; j++)
//         {
//             if (b[i]>b[j])
//             {
//                 int temp = b[i];
//                 b[i]=b[j];
//                 b[j]=temp;
//             }
            
//         }
        
//     }
//     printf("Array in ascending order:-\n");
//     for (int k = 0; k < a; k++)
//     {
//         printf("%d ", b[k]);
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int a, c, d, e, f;
//     printf("How many spaces do you want in array:-\n");
//     scanf("%d", &a);
//     int b[a];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     printf("Enter the postion you want the array to be added:-\n");
//     scanf("%d", &c);
//     int arr[a+1];
//     for (int i = 0; i < c-1; i++)
//     {
//         arr[i]=b[i];
//     }
//     printf("Enter the number you want to add at that position:-");
//     scanf("%d", &arr[c-1]);
//     for (int j = c; j < a+1 ; j++)
//     {
//         arr[j]=b[j-1];
//     }
//     printf("Final array of yours id :-\n");
//     for (int k = 0; k < a+1; k++)
//     {
//         printf("%d\n", arr[k]);
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int a, b, c, d, e, f;
//     printf("Write rows and columns of array respectively:-\n");
//     scanf("%d %d", &a, &b);
//     int arr[a][b];
//     printf("Enter the elements of array:-\n");
//     for (int j = 0; j < a; j++)
//     {
//         for (int i = 0; i < b; i++)
//         {
//             scanf("%d", &arr[j][i]);
//         }
//     }
//     printf("The elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//     }
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int a, b, c, d, e, f;
//     printf("Write rows and columns of array respectively:-\n");
//     scanf("%d %d %d", &a, &b, &c);
//     int arr[a][b][c];
//     printf("Enter the elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             for (int k = 0; k < c; k++)
//             {
//                 scanf("%d", &arr[i][j][k]);
//             }
            
//         }
//     }
//     printf("The address of elements of array:-\n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             for (int k = 0; k < c; k++)
//             {
//                 printf("%p\n", &arr[i][j][k]);
//             }
            
//         }
//     }
//     return 0;
// }