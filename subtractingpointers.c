#include <stdio.h>
int main()
{
	int arr[]={10,30, 50, 70};
	int *ptr1 = arr;
	int *ptr2 = ptr1+2;
	printf("%ld\n", ptr2-ptr1);
	return 0;
}

