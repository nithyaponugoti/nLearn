#include <stdio.h>
int main()
{
    int x=13;
    int y= x++; //y=13; x=14(x+1)
    int z= ++x; //x=15 (x+1); z=15
    printf("%d %d %d", x,y,z);
    return 0;
    {
        int a= x--;
        int b= --x;
    }
}