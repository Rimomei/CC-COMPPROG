#include <stdio.h>
int main()
{
 float res;
 float res2;
 float res1;
 float b;
 float c;

 printf("B = ");
 scanf("%f", &b);
 printf("B %.2f ", b);
 printf("\nC = ");
 scanf("%f", &c);
 printf("C: %.2f\n", c);
 res1 = b+c;
 printf("%.2f\n", res1);
 res2 = 2*(b*c);
 printf("%.2f\n", res2);
 res = res1 / res2;
 printf("res = %.2f", res);
 
 return 0;
}