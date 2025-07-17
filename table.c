#include <stdio.h>
int main()
{
        int n,m;
        printf("Enter two values:\n");
        scanf("%d %d",&n,&m);
        for(int i=1;i<=m;i++){
                printf("%d",(n*i));
        }
        return 0;
}


	
