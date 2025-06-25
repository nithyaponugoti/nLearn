#include <stdio.h>
int main()
{
    int x=13;
    int y= x++; //y=13; x=14(x+1)
    int z= ++x; //x=15 (x+1); z=15
    {
        int a= x--;//a=15; x=14(x-1)
        int b= --x; //x=13(x-1); b=13
        printf("%d %d %d %d %d", x,y,z,a,b);
        return 0; 
    }
}