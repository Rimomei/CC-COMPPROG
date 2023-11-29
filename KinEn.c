#include <stdio.h>
int main()
{
int k;
int m;
int v;

printf("Value of m: ");
scanf("%d", &m);
printf("M: %d\n", m);

printf("value of v: ");
scanf("%d", &v);
printf("%d\n", v);
k = m * (v * v);
k = k / 2;
printf("%d", k);

return 0;
}