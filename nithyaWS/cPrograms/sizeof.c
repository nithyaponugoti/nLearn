#include <stdio.h>
#include <stdbool.h>
int main()
{
	long long int z= 5;
	long long int d=11;
	int x=10;
	
	
	printf("%zu %p\n",sizeof(x),&x);
	printf("%zu %p\n",sizeof(d),&d);
	printf("%zu %p\n",sizeof(z), &z);
	printf("%zu\n",sizeof(13.6));
	printf("%zu\n",sizeof(x+10));
	return 0;
}
