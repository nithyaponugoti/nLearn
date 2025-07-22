#include <stdio.h>
int main()
{
        int arr[]={10, 20, 30,50};
        int *ptr=arr;
        printf("%d %p\n", *ptr, ptr);
        ptr++;
        printf("%d %p\n", *ptr, ptr);
        ptr=ptr+2;
        printf("%d %p\n", *ptr, ptr);
        return 0;
}

