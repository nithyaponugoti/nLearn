#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Hi,My_name_is_Nithya";
	const char *a = "_ ,";
	char *tok = strtok(s1, a);
	while(tok != NULL){
		printf("%s\n", tok);
		tok = strtok(NULL, a);
	}
	return 0;
}

