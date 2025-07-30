#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "rld Hello World";
	char str2[] = "rld";
	char *p = strstr(str1, str2);
	if(p == NULL){
		printf("Not Found");
		return 0;
	}
	
	while(p){
		printf("%ld\n", p - str1);
		p = strstr(p+1, str2);
	}
	return 0;
}

		
