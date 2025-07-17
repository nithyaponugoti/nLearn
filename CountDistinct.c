#include <stdio.h>
int CountDistinct(int arr[], int n)
{
	int a=1;
	for(int i=1; i<n; i++){
		int isdistinct=1;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
			isdistinct=0;
			break;
	}
}
			if(isdistinct){
			a++;
	}
}

	return a;
}

	int main()
	{
		int arr[]={1, 2, 3, 3, 4};
		int n= sizeof(arr)/sizeof(arr[0]);
		printf("%d\n", CountDistinct(arr,n));
		return 0;
	}
