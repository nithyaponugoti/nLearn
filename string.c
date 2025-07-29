#include <stdio.h>
#include <string.h>
int main()
{
        char str1[]= "Hello";
        char str2[]= {'W','O','R','L','D','\0'};
	printf("%s %s ", str1, str2);
	printf("%zu %zu ", sizeof(str1), sizeof(str2));
	printf("%lu %lu", strlen(str1), strlen(str2));
	return 0;
}

