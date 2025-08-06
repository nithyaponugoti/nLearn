#include <stdio.h>
struct a
{
	int x;
	int y;
};
int main()
{
	struct a p1 = {.y = 30, .x = 50};
	printf("%d %d\n", p1.x, p1.y);
	struct a p2;
	printf("%d %d", p2.x, p2.y);
	return 0;
}
