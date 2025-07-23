#include <stdio.h>
int x=20;
void changepointer(int**pp)
{
	*pp =&x;
}

int main()
{
	int *p = NULL;
	changepointer(&p);
	if (p==NULL){
		printf("NULL");
	}
	else{
		printf("%d",*p);
	}
	return 0;
}
	



