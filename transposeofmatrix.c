#include <stdio.h>
void fun(int m, int n, int mat[m][n])
{
	int new[n][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			new[j][i] = mat[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d", new[i][j]);
		}
			printf("\n");
	}
}

int main()
{
	int mat[3][4] = {{1,1,1,1}, {2,2,2,2}, {3,3,3,3}};
	fun(3, 4, mat);
	return 0;
}

