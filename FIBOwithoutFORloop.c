#include <stdio.h>
int main(){
    int fib1= 13, fib2 = 21, fib3;

    
    fib3 = fib1 + fib2;
    printf("%d\n%d\n%d\n",fib1, fib2, fib3);

    fib1 = fib2;
    fib2 = fib3;
    fib3 = fib1 + fib2;
    printf("%d\n", fib3);

    fib1 = fib2;
    fib2 = fib3;
    fib3 = fib1 + fib2;
    printf("%d", fib3);

    return 0;
}  


    
    