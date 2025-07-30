#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20] = "Hello World";
	char str2[20] = "Hello";
	if (strncmp(str1, str2, strlen(str2)) == 0)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
