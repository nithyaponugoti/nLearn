#include <stdio.h>
void PrimeFactors(int n, int a){
    if (a*a>n)
{
    if (n>1)
    printf("%d", n); 
    return;
}
if (n%a==0)
{
    printf("%d\n", a);
    PrimeFactors(n/a, a);
}
else
{
   
    PrimeFactors(n, a+1);
}

}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    PrimeFactors(n,2);
    return 0;
}
