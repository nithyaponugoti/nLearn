#include <stdio.h>
void fun(int*ptr)
{
	*ptr = *ptr + 100;
}
int main()
{
	int x = 10;
	fun(&x);
	printf("%d", x);
	return 0;
}
	
