#include <stdio.h>

int main(){

int value;
int sum1;
int sum2;
int sum3;
int sum4;

printf("Enter Value between 0 and 32,767: ");
scanf("%d", &value);
printf("%d pesos\n", value);

sum1 = value%10;
sum2 = value%100-sum1;
sum3 = value%1000-sum1-sum2;
sum4 = value%10000-sum1-sum2-sum3;
printf("%d ones\n", sum1);
printf("%d tens\n", sum2);
printf("%d hundreds\n", sum3);
printf("%d thousands\n", sum4);
return 0;





}