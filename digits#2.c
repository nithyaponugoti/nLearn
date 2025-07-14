#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    int a=0;
    while(n!=0){
        n=n/10;
        a++;
    }
    printf("%d", a);
    return 0;
}
