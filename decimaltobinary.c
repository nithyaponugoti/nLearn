#include <stdio.h>
#include <string.h>
void reverse(char*ans){
	char new[100];
	int i = 0;
	int l = strlen(ans) - 1;
	while(ans[i] != '\0'){
		new[i] = ans[l];
		i++;
		l--;
	}
	printf("%s", new);
}
int main(){
	int n;
	printf("Enter a value:\n");
	scanf("%d", &n);
	char ans[100];
	int i = 0;
	while(n>0){
		int rem = n % 2;
		char num = rem + 48;
		ans[i] = num;
		i = i + 1;
		n = n / 2;
	}
	reverse(ans);
	return 0;
}

			

	
