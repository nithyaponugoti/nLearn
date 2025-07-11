#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int x=0; x<n; x++)
        {
            for(int y=0; y<n; y++)
            {
                printf("* ");
                 
            }
            printf("\n");
        }
        return 0;
}
