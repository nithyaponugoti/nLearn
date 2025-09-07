#include <stdio.h>
void fun1(int n){
        if(n==0){
                return;
        }
        else{
                printf("%d\n", n);
                fun1(n - 1);
        }
}

int main()
{
        int n = 10;
        fun1(10);
        return 0;
}
