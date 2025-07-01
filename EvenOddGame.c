#include <stdio.h>
int main()
{
    printf("Enter a number:\n");
    int n;
    scanf("%d",&n);
    
    if (n%2==0)
    {
        printf("Opponent Wins!");
    }
    else
    {
        printf("Player Wins!");
    }
    return 0;
}
