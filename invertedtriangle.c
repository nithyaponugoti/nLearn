#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if(x>=(n-y+1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
