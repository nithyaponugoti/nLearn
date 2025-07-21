#include <stdio.h>
void fun(int *ptr){
	*ptr = *ptr+10;
}

int main()
{
	int a=5;
	fun(&a);
	printf("%d ", a);
	printf("%p", &a);
	return 0;
}

