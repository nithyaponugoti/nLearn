#include <stdio.h>
int main()
{
    int x=0x10;
    printf("%i\n", x);
    long long y=100;
    printf("%lld\n", y);
    long z= 50;
    printf("%ld\n", z);
    size_t a= sizeof(y);
    printf("%zd\n", a);
    return 0;
    
}