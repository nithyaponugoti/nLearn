nithyavponugoti@Nageswaras-MacBook-Pro ~ % vi SortedArrays.c

#include <stdio.h>
int main()
{
        int a[]={1, 2, 3, 4};
        int n=4;
	int sorted=1;
        for(int i=1; i<n; i++){
                if(a[i]<a[i-1]){
			sorted=0;
			break;
}
}

	
                if (sorted==0){
			printf("Not Sorted\n");
                }
                else
                {
                        printf("Sorted\n");
                	
		}
			return 0;
		}
