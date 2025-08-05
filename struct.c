#include <stdio.h>
#include <string.h>
typedef struct student
{
	int number;
	char name[100];
} student;

int main()
{
	student e;
	e.number = 10;
	strcpy(e.name, "Nithya");
	printf("%s %d", e.name, e.number);
	return 0;
}
