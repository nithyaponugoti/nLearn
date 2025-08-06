#include <stdio.h>
union Test 
{
	int x;
	char arr[4];
};

int main()
{
	union Test t;
	t.x = 1024;
	printf("%d %d %d %d\n", t.arr[0], t.arr[1], t.arr[2], t.arr[3]);
	return 0;
}
