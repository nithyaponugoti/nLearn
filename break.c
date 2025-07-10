#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(int a=2; a<=n; a++)
        if(n%a==0)
        {
            printf("The smallest Divisor is %d", a);
            break;
        }
        return 0;
}
