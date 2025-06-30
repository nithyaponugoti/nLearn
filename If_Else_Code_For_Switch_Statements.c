#include <stdio.h>
int main()
{
    int x=0; int y=0;
    char c;
    printf("Enter a choice:\n");
    scanf("%c", &c);
    if (c=='R')
        x++;
    else if (c=='L')
        x--;
    else if (c=='U')
        y++;
    else if(c=='D')
        y--;
    else
        printf("Invalid #\n");

    

    printf("%d %d\n", x,y);

    return 0;
}
    

