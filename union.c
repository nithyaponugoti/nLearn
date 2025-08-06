#include <stdio.h>
union Test
{
	int x;
	int y;
};
int main()
{
	union Test t;
	t.x = 10;
	printf("%d %d\n", t.x, t.y);
	t.y = 11;
	printf("%d %d\n", t.x, t.y);
	printf("%lu", sizeof(union Test));
	return 0;
}
	
