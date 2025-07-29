#include <stdio.h>
#include <string.h>
void search(char* a, char* b)
{
	int M=strlen(a);
	int N=strlen(b);
	for(int i=0; i<=M-N;i++){
		int j;
		for(j=0; j<N; j++){
			if(a[i+j]!= b[j])
			break;
		}
		if(j==N)
			printf("Pattern found at index %d\n", i);
	}
}
int main()
{
	char a[]= "ABCDEFGH";
	char b[]="ABCD";
	search(a,b);
	return 0;
}
	
		
