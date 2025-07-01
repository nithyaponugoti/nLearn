#include <stdio.h>
int main()
{
    int x; int y;int a;
    printf("Enter three numbers:\n");
    
    scanf("%d %d %d", &x, &y, &a);
    switch(a)
    {
        case 1:
            printf("%d\n", x+y); break;
        case 2:
            printf("%d\n", x-y); break;
        case 3:
            printf("%d\n", x * y); break;
        default:printf("Invalid\n"); break;

    }
    return 0;
}

