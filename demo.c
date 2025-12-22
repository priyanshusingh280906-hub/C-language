#include <stdio.h>

struct student
{
    char name[30];
    int marks1;
    int marks2;
    float percentage;
};

int main()
{
    int a, b;
    char sec;
    printf("Enter the class and section:-\n");
    scanf("%d %c", &a, &sec);
    printf("Enter the number of student:-\n");
    scanf("%d", &b);
    struct student s[b];
    for (int i = 0; i < b; i++)
    {
        printf("Enter the details of roll no %d:-\n", i + 1);
        printf("Name:-\n");
        scanf("[^\n]", s[i].name);
        printf("English Marks:-\n");
        scanf("%d", &s[i].marks1);
        printf("Science Marks:-\n");
        scanf("%d", &s[i].marks2);
        s[i].percentage = (s[i].marks1 + s[i].marks2) / 2.0;
    }
    printf("\n");
    for (int i = 0; i < b; i++)
    {
        printf("The details of roll no %d:-\n", i + 1);
        printf("Name:- %s\n", s[i].name);
        printf("English Marks:- %d\n", s[i].marks1);
        printf("Science Marks:- %d\n", s[i].marks2);
        printf("Total Percentage:- %f\n", s[i].percentage);
        printf("\n");
    }
    float high = s[0].percentage;
    for (int i = 0; i < b; i++)
    {
        if (high < s[i].percentage)
        {
            high = s[i].percentage;
        }
    }
    int d, e;
    for (int i = 0; i < b; i++)
    {
        if (high == s[i].percentage)
        {
            d = i + 1;
            e = i;
        }
    }
    printf("The highest percentage is %f secured by roll no %d Name %s\n", high, d, s[e].name);
    printf("Class: %d Section: %c\n", a, sec);
    return 0;
}