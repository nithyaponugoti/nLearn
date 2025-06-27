#include <stdio.h>
int main()
{
    int a= 15;
    int n= 13;
    int ans = (a * (n-1)*(n+1));
    ans += 10;
    ans %= 7;
        printf("%d\n", ans);
}