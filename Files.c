#include <stdio.h>
int main()
{
	FILE * ptr;
	char name[10];
	int age;
	ptr = fopen("info.c", "r");
	if(ptr == NULL){
		printf("Error");
		return 1;
	}
	
	while(fscanf(ptr, "%s %d", name, &age) != EOF){
		printf("%s %d\n", name, age);
	}

	fclose(ptr);
	return 0;
}
