#include <stdio.h>

int fun(int n){
    static int x = 0;

    if(n > 0){
        x++;
        return fun(n-1) + x;
    }
}

int main(){
    printf("%d\n", fun(5)); //25 
    printf("%d\n", fun(10)); //150 since 5 + 10 = 15 * 10 = 150
}

/*
*
*   Tracing
*       fun(5)      
*         |         x = 1
*       fun(4) + 5 Left blank at first since x is added during returning time
*         |         x = 2
*       fun(3) + 5 Left blank at first since x is added during returning time
*         |         x = 3`
*       fun(2) + 5 Left blank at first since x is added during returning time
*         |         x = 4
*       fun(1) + 5
*         |         x = 5
*       fun(0) + 5 - Now, unwind with x = 5
*         |     
*         0     Output: 5 + 5 + 5 + 5 + 5 = 25
*
*/