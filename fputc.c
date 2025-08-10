#include <stdio.h>
int main()
{
	FILE * ptr = fopen("sample.c", "w");
	if(ptr == NULL){
		printf("Error");
		return 1;
	}
	fputc('X', ptr);
	char str[] = "HelloWorld";
	for(int i = 0; str[i] != '\0'; i++){
		fputc(str[i], ptr);
	}
	
	fclose(ptr);
	return 0;
}
