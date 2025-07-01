#include <stdio.h>
int main()
{
    printf("Enter 3 Numbers:\n");
    int x; int y; int z;
    scanf("%d %d %d", &x, &y, &z);
    if (x>y && x>z)
        printf("The largest number is x!");
    else if(y>x && y>z)
        printf("The largest number is y!");
    else 
        printf("The largest number is z!");
}
