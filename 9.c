#include <stdio.h>
void Perimeter(double x, double y);
void Area(double x, double y);
void Printer(double x, double y);

int main()
{
    double a, b;
    printf("The values of the Triangle:\n");
    scanf("%lf %lf", &a, &b);
    Perimeter (a,b);
    Area (a,b);

    return 0;
}
void Perimeter(double x, double y)
{
double perimeter;
perimeter = (x * x) + (y * y);
printf("Perimeter is Equivalent to %lf\n", perimeter);
}
void Area(double x, double y)
{
double area;
area = .5 * (x * y);
printf("Perimeter is Equivalent to %lf\n", area);
}