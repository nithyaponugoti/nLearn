#include <stdio.h>
int main()
{
    int x=100;
    printf("%d\n", x);
    printf("%.5d\n", -x);
    double y=10.5;
    printf("%5e\n",y);
    printf("%*e\n", 6,y);
    char z[]="HelloWorld";
    printf("%5.2s\n", z);
    printf("%-5d %5e %5.2s\n", x,y,z);
    printf("%*.*s",6,5,z);
    return 0;

}