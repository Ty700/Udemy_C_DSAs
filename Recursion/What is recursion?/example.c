#include <stdio.h>

int foo(int n){
    if(n > 0){
        printf("%d", n);
        foo(n-1);
    }
    if(n == 0){
        printf("\n");
    }
}


int main(void){
    foo(5);
}