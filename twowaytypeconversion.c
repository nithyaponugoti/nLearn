#include <stdio.h>
int main()
{
	int x=10;
        void *ptr1= &x;
	int *ptr2= (int *)ptr1;
	char y= 'A';
	char*ptr3= &y;
	ptr1=(void *)ptr3;
	printf("%p\n",ptr2);
	printf("%c\n",*ptr3);
	printf("%p\n", ptr3);
	return 0;
}


