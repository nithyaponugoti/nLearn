#include <stdio.h>
struct S1
{
	char a;
	int b;
	double c;
}__attribute__((packed));

struct S2
{
	char d;
	char e;
	double f;
}__attribute__((packed));

struct S3
{
	char g;
	double h;
	char i;
}__attribute__((packed));

int main()
{
	printf("%zd %zd %zd\n", sizeof(struct S1), sizeof(struct S2), sizeof(struct S3));
	return 0;
} 
