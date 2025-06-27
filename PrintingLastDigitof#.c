#include <stdio.h>
int main()
{   int ans;
    int n= 345;
    if (n<0) { 
    
     ans = -(n%10) ;
    }
    else 
    {
        ans= n%10;
   }     
        printf("%d\n", ans);

    return 0;
}
