#include <stdio.h>
#include <stdlib.h>
int *getarray(int n)
{
	int*ptr=calloc(n, sizeof(int));
	return ptr;
}
int main()
{
	int n;
	printf("Enter a value:\n");
	scanf("%d", &n);
	int*ptr=getarray(n);
	for(int i=0; i<n; i++){
		printf("%d ", ptr[i]);
	}
		
	free(ptr);
	ptr=NULL;
	return 0;
}
