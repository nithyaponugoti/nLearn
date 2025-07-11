#include <stdio.h>
int main()
{
    int n; int fact=1;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int x=n; x>0; x--)
    {
    fact *=x;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}
