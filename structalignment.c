#include <stdio.h>
struct S1
{
	char a;
	int b;
	double c;
};

struct S2
{
	char d;
	char e;
	double f;
};

struct S3
{
	char g;
	double h;
	char i;
};

int main()
{
	printf("%zd %zd %zd\n", sizeof(struct S1), sizeof(struct S2), sizeof(struct S3));
	return 0;
} 
