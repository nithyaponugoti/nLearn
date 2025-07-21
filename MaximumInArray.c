#include <stdio.h>
int main()
{
	int a[]={10,5, 20, 15};
	int n= sizeof(a)/sizeof(a[0]);
	int x= a[0];
	for(int i=0; i<n; i++){
		if(a[i]>x){
		x=a[i];
	}
}
	printf("%d", x);
	return 0;
}
		
		
