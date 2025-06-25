#include <stdio.h>
int main()
{
    int x=10;
    int y=7;
    printf("%d\n", (x>>1));
    printf("%d\n", (x<<2));
    printf("%d\n",x&y );
    printf("%d\n", x|y);
    printf("%d\n", x^y);
    return 0;
}