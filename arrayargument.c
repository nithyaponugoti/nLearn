#include <stdio.h>
void print(int n, int m, int mat[n][m])
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", mat[i][j]);
		}
			printf("\n");
	}

}
int main()
{
	int mat[3][2] = {{10, 15},{20, 25},{25, 30}};
	print(3, 2, mat);
	return 0;
}
