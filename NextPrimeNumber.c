#include <stdio.h>
int NextPrime(int n){

    while(1){
    
        int i;
        for(i=2; i<n; i++){
            if(n%i==0)
                break;

    }
        if(i==n)
            return n;
            n++;
    }
}
int main()
{
    int n;
    printf("Enter a value:");
    scanf("%d", &n);
    printf("%d", NextPrime(n+1));
    return 0;
}

