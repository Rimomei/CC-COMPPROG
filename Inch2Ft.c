#include <stdio.h>
int main(){
    float inch, feet;
    printf("Convert how many Inches:");
    scanf("%f", &inch);
    feet = inch * 0.0833333333;
    printf("Feet = %0.2f", feet);
    return 0;

}