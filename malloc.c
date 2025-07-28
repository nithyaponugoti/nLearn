#include <stdio.h>
#include <stdlib.h>
int* getarray(int n)
{
	int*ptr = malloc(sizeof(int)*n);
	for(int i=0; i<n; i++)
	{
		ptr[i]=i+1;
	}
	return ptr;
}
int main()
{
	int n;
	printf("Enter a value:\n");
	scanf("%d ", &n);
	int*ptr = getarray(n);
	for(int i=0; i<n; i++){
		printf("%d ", ptr[i]);
	}
	free(ptr);
	return 0;
}
