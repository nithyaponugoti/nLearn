#include <stdio.h>
int main()
{
	int m = 11;
	int n = 11;
	int arr[11][11];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			arr[i][j] = i*j;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
			printf("\n");
		
	}
	return 0;
}
	
			
