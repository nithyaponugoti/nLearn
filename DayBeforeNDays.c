#include <stdio.h>
int main()
{
    int a=1;
    int b=3;
    int c= a%7;
    int d= b-c;
    if (d>=0)
    {
        printf("%d",d);
    }
    else
    {
        d=d+7;
        printf("%d", d);
        return 0;
    }
}