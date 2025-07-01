#include <stdio.h>
int main()
{
    int x=0; int y=0;
    printf("Enter a choice:\n");
    char c;
    scanf("%c", &c);
    switch(c)
    {
    case 'L': x--; break;
    case 'R': x++; break;
    case 'U': y++; break;
    case 'D': y--; break;
    default: printf("Invalid #");break;
        
    }

    printf("%d %d\n", x,y);
    return 0;
}

