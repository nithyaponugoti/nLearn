#include <stdio.h>
int main()
{
    int n; int a; 
    printf("Enter two values:\n");
    scanf("%d %d", &n, &a);
    int x;
    if (a>=n)
    {
        x=n;
    }
    else 
    {
        x=a;
    }
        int ans =1;
    for(int i=1; i<=n && i<=a; i++){
        if (n%i==0 && a%i==0){
             ans=i;
            
    }
        
    }
    printf("%d\n", ans);
    return 0;

}
