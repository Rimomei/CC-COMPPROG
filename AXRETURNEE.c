#include <stdio.h>
void biFun(int* ax, int* ay);
int main ()
{
    int a = 2;
    int b = 6;

    biFun(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
void biFun(int* ax, int* ay)
{
    *ax = (*ax + 2);
    *ay = (*ay / *ax);

    return;
}