#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	printf("Enter a string:\n");
	scanf("%s", str);
	int start = 0;
	int end = strlen(str)-1;
	while(start < end){
		if(str[start] != str[end]){
			printf("False");
			return 0;
		}
		else{
			start++;
			end--;
		}
	}
		printf("True");
		return 0;
}
 
		
			
			
		
	
