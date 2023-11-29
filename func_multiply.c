#include <stdio.h>

int multiply (int num1, int num2);  
int main(void)
{
    int multiplier;
    int multiplicend;
    int product;
    
    printf("Enter Two Integers\n");
    scanf("%d%d", &multiplier, &multiplicend);

    product = multiply (multiplier, multiplicend);
    
    printf("Product of %d & %d is %d \n", multiplier, multiplicend, product);
    return 0;
}
int multiply (int num1, int num2)
{
    return  num1 * num2;
}