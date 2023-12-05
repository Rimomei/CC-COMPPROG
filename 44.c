#include <stdio.h>
#define LABOR 0.35
#define TAX 0.085

void printMeasure(int x, int y);
void printCharge(double x, double y, double z, double a);
double getArea(double x, double y);
double getLaborFee(double x, double y);
double getCarpetPrice(double x, double y, double z); 

int main()
{
    double length, width, customerDiscount, costPerSqFt;

    printf("Length of the room (feet)?");
    scanf("%lf", &length);
    printf("Width of the room (feet)?");
    scanf("%lf", &width);
    printf("Customer discount (percent)?");
    scanf("%lf", &customerDiscount);
    printf("Cost per square-foot (xxx.xx)?");
    scanf("%lf", &costPerSqFt);
    printMeasure(length, width);
    printCharge(length, width, costPerSqFt, customerDiscount);
    return 0;
}

void printMeasure(int x, int y)
{
    int area = getArea(x, y);
    printf("\t\t\tMEASUREMENT\n");
    printf("Length\t\t\t\t\t\t%d ft\n", x);
    printf("Width\t\t\t\t\t\t%d ft\n", y);
    printf("Area\t\t\t\t\t\t%d square ft\n", area);
}

void printCharge(double x, double y, double z, double a)
{
    int area = getArea(x, y);
    double customerDiscount = a;
    double laborFee = area * LABOR;
    double carpetArea = getCarpetPrice(x, y, z);
    double installedPrice = carpetArea + laborFee;
    double discountPrice = installedPrice * (customerDiscount / 100);
    double subTotal = carpetArea - discountPrice;
    double tax = subTotal * TAX;
    double total = subTotal + tax;
    printf("\t\t\tCHARGES\n");
    printf("DESCRIPTION\t\tCOST/SQ. FT.\t\tCHARGE\n");
    printf("----------\t\t-----------\t\t-------\n");
    printf("Carpet\t\t\t%11d\t\t$%7.2lf\n", area, carpetArea);
    printf("Labor\t\t\t%11.2lf\t\t$%7.2lf\n", LABOR, laborFee);
    printf("\t\t\t\t\t\t-------\n");
    printf("INSTALLED PRICE\t\t\t\t\t$%7.2lf\n", installedPrice);
    printf("Discount\t\t%11.2lf\t\t$%7.2lf\n",customerDiscount, discountPrice);
    printf("\t\t\t\t\t\t-------\n");
    printf("SUBTOTAL\t\t\t\t\t$%7.2lf\n", subTotal);
    printf("Tax\t\t\t\t\t\t$%7.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t\t$%7.2lf\n", total);
}

double getArea(double x, double y)
{
    double area = x * y;
    return area;
}

double getLaborFee(double x, double y)
{
    double area1 = getArea(x, y);
    double fee = area1 * LABOR;
    return fee;
}
double getCarpetPrice(double x, double y, double z)
{
    double area = getArea(x, y);
    double costPerSqFt = area * z;
    return costPerSqFt;
}


