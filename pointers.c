#include <stdio.h>
int main()
{
        int a=5;
        int *p;
        p=&a;
        printf("%d ", a );
        printf("%d ", *p );
        printf("%p ", p );
        printf("%p", &p);
        return 0;
}
    
