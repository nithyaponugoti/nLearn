#include <stdio.h>
void fun(int a)
{
    if (a<10)
{
    printf("%d\n", a);
    return;
}
else
{
    fun(a/10);
}
}
int main()
{
    int a;
    printf("Enter a value for a:\n");
    scanf("%d", &a);
    fun(a);
    return 0;
}
