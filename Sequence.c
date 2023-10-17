#include <stdio.h>

int main(){

short int value;
int sum1;
int sum2;
int sum3;
int sum4;
int sum5;

printf("Enter Value between 0 and 32,767: ");
scanf("%hd", &value);

sum1 = value%10;
sum2 = value/10%10;
sum3 = value/100%10;
sum4 = value/1000%10;
sum5 = value/10000%10;

printf("%d\t%d\t%d\t%d\t%d\n",sum5 ,sum4, sum3, sum2, sum1);
printf("%d\t%d\t%d\t%d\n",sum4, sum3, sum2, sum1);
printf("%d\t%d\t%d\n",sum3, sum2, sum1);
printf("%d\t%d\n",sum2, sum1);
printf("%d\n",sum1);
return 0;
}