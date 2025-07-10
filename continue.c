#include <stdio.h>
int main()
{
    int x; int y;
    printf("Enter 2 values:\n");
    scanf("%d %d", &x,&y);
    for(int i=1; i<=x; i++){
        if(i%y==0)
            continue;
            printf("%d ", i);
        }
            return 0;
        
}

