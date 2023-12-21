//NAME: HOWARD LANCE D. MANGOHIG BSCS - 1A
#include <stdio.h>

void axis(double angle);
void quadrants(double angle);

int main()
{
    double angle;

    printf("Enter the angle: ");
    scanf("%lf", &angle);

    axis(angle);
    quadrants(angle);
}

void axis(double angle)
{
    if(angle == 0 || angle == 360)
    printf("The angle is in the positive x axis.");
    else if (angle == 90)
    printf("The angle is in the positive y axis.");
    else if (angle == 180)
    printf("The angle is in the negative x axis.");
    else if (angle == 270)
    printf("The angle is in the negative y axis.");
}

void quadrants(double angle)
{
    if(angle > 0 && angle < 90)
    printf("The angle %.2lf is in Quadrant I", angle);
    else if(angle > 90 && angle < 180)
    printf("The angle %.2lf is in Quadrant II", angle);
    else if(angle > 
    180 && angle < 270)
    printf("The angle %.2lf is in Quadrant III", angle);
    else if(angle > 270 && angle < 360)
    printf("The angle %.2lf is in Quadrant IV", angle);
}