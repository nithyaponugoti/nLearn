#include <stdio.h>
#include <string.h>
int main()
{
	char str[6];
	strcpy(str, "Hello");
	printf("%s\n", str);
	strncpy(str, "HiWorld",5);
	str[4] = '\0';
	printf("%s\n", str);
	return 0;
}
	
