#include <stdio.h>
int main()
{
    int n; int prime=1;
    printf("Enter a value:\n");
    scanf("%d", &n);
    if (n==0||n==1)
    {
        printf("Neither");
        return 0;
    }
    for(int x=2; x<n; x++)
      if(n%x==0)
    { 
        prime=0;
        break;  
    }
    if(prime==0)
        printf("not a prime number");
    else
        printf("Prime Number");
       
    return 0;
 
}
