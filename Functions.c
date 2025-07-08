#include <stdio.h>
void fun()
{
printf("Fun being called\n");
}

    int main()

{
    printf("Before calling fun\n");
    fun();
    fun();
    printf("After calling fun");
    return 0;
    
}
