#include <stdio.h>
int main()
{
	FILE * ptr;
	char ch;
	ptr = fopen("sample.c", "r");
	if(ptr == NULL){
		printf("Error");
		return 1;
	}
	fseek(ptr, 4, SEEK_SET);
	ch = fgetc(ptr);
	printf("Char at location 5 = %c\n", ch);
	long pos = ftell(ptr);
	printf("Current position: %ld\n", pos);
	rewind(ptr);
	ch = fgetc(ptr);
	printf("First character: %c\n", ch);
	fclose(ptr);
	return 0;
}
	
