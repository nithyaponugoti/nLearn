#include <stdio.h>
int main()
{
	int sum=0;
	int a[]={10, 40, 60, 90};
	int n= sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%f",(float)sum/n);
	return 0;
}
		
