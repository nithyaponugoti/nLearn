#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter your name. \n");
    fgets(name,100,stdin);
    printf("Hi %s, \n", name);
    printf("What would you like today?");
    return 0;
}
