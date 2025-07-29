#include <stdio.h>
#include <string.h>
int main()
{
	char s1[]= "helloworld";
	char s2[]= "hElLo WoRlD";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, "hElLo WoRlD"));
	printf("%d\n", strcmp(s1, "welcome"));
	printf("%d\n", strcmp(s2, "hElLo WoRl"));
	return 0;
}
