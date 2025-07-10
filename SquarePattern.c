#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        {
            for(int x=0; x<n; x++)
            {
                printf("%d ", x);
            }
            printf("\n");
        }
        return 0;
}
