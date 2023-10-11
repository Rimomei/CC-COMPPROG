#include <stdio.h>
int main(){
    float Inch,Meters ;
    printf("Convert how many Inches:");
    scanf("%f", &Inch);
    Meters = Inch * 0.0254;
    printf("Meters = %0.2f", Meters);
    return 0;

}