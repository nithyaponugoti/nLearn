#include <stdio.h>
#include <string.h>
typedef struct student
{
	int number;
	char name[100];
} student;

void changename(student*ptr)
{
	strcpy(ptr -> name, "Nithya");
}

int main()
{
	student s = {10, "NA"};
	changename(&s);
	printf("%d %s", s.number, s.name);
	return 0;
}	
