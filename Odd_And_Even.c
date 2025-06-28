#include <stdio.h>
int main()
 {
    int z;
   printf("Enter an integer:\n");
   scanf("%d", &z);
    if (z%2==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}