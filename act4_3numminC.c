#include <stdio.h>

int main(){

     int num1, num2, num3;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("\nSecond Number: ");
    scanf("%d", &num2);
    printf("\nThird Number: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3)
        printf("Smallest Number is: %d\t", num1);

    else if (num2 <= num1 && num2 <= num3)
        printf("Smallest Number is: %d\t", num2);

    else
        printf("Smallest Number is: %d\t", num3);

    return 0;
}