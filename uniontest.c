#include <stdio.h>
union test
{
	int x, y;
};
int main()
{
	union test a;
	a.x = 10;
	printf("%d %d\n", a.x, a.y);
	a.y = 20;
	printf("%d %d\n", a.x, a.y);
	printf("%p\n", &a.x);
	printf("%p", &a.y);
	return 0;
}

