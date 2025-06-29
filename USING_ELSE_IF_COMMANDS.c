#include <stdio.h>
int main()
 {  int number;
    printf("Enter a number:\n");
    scanf("%d", &number);
    if (number<10)
    printf("Small\n");
    else if (number>100)
    printf("Big\n");
    else
    printf("Number\n");
}
