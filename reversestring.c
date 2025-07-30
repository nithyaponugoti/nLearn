#include <stdio.h>
#include <string.h>
int main(){
	char str1[] = "Hello";
	int a = strlen(str1);
	char newstring[10];
	int j = 0;
	for(int i = a - 1; i >= 0; i--, j++){
			 newstring[j] = str1[i];
	}
		newstring[a] = '\0';
		printf("%s\n", newstring);
		return 0;
}
	
