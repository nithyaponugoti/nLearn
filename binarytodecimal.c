#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "10011001";
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] != '0'&& str[i] != '1'){
			printf("Invalid Character: %c\n", str[i]);
			return 1;
		}
	}
	int ans = 0;
	for(int i = 0; str[i] != '\0'; i++){
	        ans = ans * 2 + (str[i] - '0');
	}
		printf("%d", ans);
		return 0;
}


