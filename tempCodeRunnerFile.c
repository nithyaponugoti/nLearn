#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int x=n-1; x>0; x--)
{
    printf("%d", (n * x));
}
}