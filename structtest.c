#include <stdio.h>
struct test
{
	int x, y;
};
int main()
{
	struct test p1 = {10,20};
	printf("%d %d ", p1.x, p1.y);
	printf("%p\n", &p1.x);
	printf("%p", &p1.y);
	return 0;
}
