#include <stdio.h>
int main()
{
    printf("Enter a year:\n");
    int x;
    scanf("%d", &x);
    if (x%4==0 && x%100!=0)
    {
        printf("Leap year");
    }
    else if(x%400==0)
    {
        printf("Leap year");
    }
    else
    {
    printf("Not a leap year");
    }
    return 0;
}