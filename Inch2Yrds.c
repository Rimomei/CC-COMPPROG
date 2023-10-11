#include <stdio.h>
int main(){
    float inch,yards ;
    printf("Convert how many Inches:");
    scanf("%f", &inch);
    yards = inch * 0.0277777778;
    printf("Yards = %0.2f", yards);
    return 0;

}