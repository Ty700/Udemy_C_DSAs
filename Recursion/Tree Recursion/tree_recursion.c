#include <stdio.h>

int fun(int n){
    if(n > 0){
        printf("%d", n);
        fun(n-1);
        fun(n-1);
    }
    return 0;
}

int main(void){
    fun(3);
    printf("\n");
}

