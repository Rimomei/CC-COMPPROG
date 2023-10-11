#include <stdio.h>
int main(){
    int n, fib1= 0, fib2 = 1, fib3;

    printf("Enter the nth terms of fibonacci numbers to generate:");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", fib1);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
    