#include <stdio.h>
int main(){
    float inch, cm;
    printf("Convert how many Inches:");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Centimeters = %0.2f", cm);
    return 0;

}