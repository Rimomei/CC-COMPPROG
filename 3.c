#include <stdio.h>
void getCeiling(double x,double y,double z); //SO THIS RETURNS ALL VALUE WHICH ARE GIVEN SO THIS IS CEILING WHICH IS THEIR HIGHEST NUMBER
void getFloor(double x,double y,double z);
void getNumber(double x, double y, double z);
int main()
{
    double nNum1 = 123.456789;    // THIS IS THE MAIN VARIABLE WHICH IS EXPLICITLY SAID. CHECK!!!!!<-----
    double nNum2 = 123.499999;   
    double nNum3 = 123.500001; 
    
    getCeiling(nNum1, nNum2, nNum3);   //HERE YOU GET THE NUMBER?  OR LIKE SOMETHING SOMETHING ILL FIGURE IT OUT LATER
    getFloor(nNum1, nNum2, nNum3);
    getNumber(nNum1, nNum2, nNum3);
    return 0;
}
void getCeiling(double x,double y,double z)
{
    int firstResult, secondResult, thirdResult;
    firstResult = (x + 1);
    secondResult = (y + 1);
    thirdResult = (z + 1);
    printf("The ceiling value of %lf is %d\n", x, firstResult);
    printf("The ceiling value of %lf is %d\n", y, secondResult);
    printf("The ceiling value of %lf is %d\n\n", z,thirdResult);
    return;
}
void getFloor(double x, double y, double z)
{
    int firstResult, secondResult, thirdResult;
    firstResult = (x);
    secondResult = (y);
    thirdResult = (z);
    printf("The floor value of %lf is %d\n", x, firstResult);
    printf("The floor value of %lf is %d\n", y, secondResult);
    printf("The floor value of %lf is %d\n\n", z,thirdResult);
    return;
}
void getNumber(double x, double y, double z)
{
    
    double firstResult, secondResult, thirdResult;
    firstResult = (x /1);
    secondResult = (y /1);
    thirdResult = (z /1);
    
    printf("The rounded %lf is %.2lf\n", x, firstResult);
    printf("The rounded %lf is %.2lf\n", y, secondResult);
    printf("The rounded %lf is %.2lf\n", z, thirdResult);
    return;
}
