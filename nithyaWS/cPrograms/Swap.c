#include <stdio.h>
int main()
{

    int a,b;
    printf("Enter two integers:  ");
    scanf("%d %d", &a, &b);

    int temp = a;
    a = b;
    b= temp;

    printf("Value of a is %d \n", a);
    printf("Value of b is %d", b);
    return 0;
}
