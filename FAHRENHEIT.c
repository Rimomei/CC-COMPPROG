#include<stdio.h>
int main()
{
float fahrenheit;
float celcius;
printf("ENTER FAHRENHEIT: ");
scanf("%f", &fahrenheit);
printf("FAHRENHEIT: %.2f\n", fahrenheit);
celcius = fahrenheit - 32;
celcius = celcius/1.8;
printf("CELCIUS: %.2f", celcius);

return 0;
}
