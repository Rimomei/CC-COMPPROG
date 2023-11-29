#include <stdio.h>
int main()
{
float celcius;
float fahrenheit;
printf("CELCIUS: ");
scanf("%f", &celcius);
printf("CELCIUS: %.2f\n", celcius);
fahrenheit = celcius * 1.8 + 32;
printf("FAHRENHEIT: %.2f\n", fahrenheit);
return 0;

}