#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x=10; int y=20;
    bool a= (x>0 && x==10);
    printf("%d\n", a);
    a = (x>0||x>y);
    printf("%d\n", a);
    a = (x>5 && x++);
    printf("%d\n", a);
    printf("%d", x);
    return 0;
}