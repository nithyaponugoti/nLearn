#include <stdio.h>
int main()

{
	float a=10.5f;
	double b=10.555;
	long double c=10.555l;
	float d=2.1e4f; // 2.1 x 10^4=21000
	double e= 200.1e-80;
	double f=0x1A.1p2;
	printf("%g %g %Lg %g %g %g", a,b,c,d,e,f);
	return 0;
}
