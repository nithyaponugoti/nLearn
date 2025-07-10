#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int x=1; x<=10; x++)
        {
            printf("%d\n ", x*i);
        }
    }
        return 0;
    
}
