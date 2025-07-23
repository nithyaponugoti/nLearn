#include <stdio.h>
int main()
{
	int x=10;
	int*ptr=&x;
	printf("%d\n", *(int*)ptr);
	return 0;
}
