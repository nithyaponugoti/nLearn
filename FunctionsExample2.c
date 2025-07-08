#include <stdio.h>
int getMax(int x, int y);

int main()
{
    int x = 5, y = 10;
    printf("%d", getMax(x,y));
    return 0;
}

int getMax(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}