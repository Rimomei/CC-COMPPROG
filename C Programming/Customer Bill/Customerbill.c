#include <stdio.h>
int main(){
 int tv, vcr, cd, rc, tape;
 float totaltv, totalvcr, totalrc, totalcd, totaltape, subtotal, tax, total;

 printf("How many TVs were sold?\t");
 scanf("%d", &tv);
 printf("How man* VCRs were sold?\t");  
 scanf("%d", &vcr);
 printf("How many Remote Controllers were sold?\t");
 scanf("%d", &rc);
 printf("How many CDs were sold?\t");
 scanf("%d", &cd);
 printf("How many Tape Recorders were sold?\t");
 scanf("%d", &tape);

  totaltv = 400 * tv;
  totalvcr = 220 * vcr;
  totalrc = 35.20 * rc;
  totalcd = 300 * cd;
  totaltape = 150 * tape;
  subtotal =(float) (totaltv + totalvcr + totalrc + totalcd + totaltape);

  tax =(float)(subtotal * 0.0825);
  total = subtotal + tax;

 printf("\n QTY          DESCRIPTION         UNIT PRICE            TOTAL PRICE \n");
 printf("\n-------------------------------------------------------------------------\n");
 printf("\n  %d       TV                  400.00                 %4.2f\n",tv, totaltv);
 printf("\n  %d       VCR                 220.00                 %4.2f\n",vcr, totalvcr);
 printf("\n  %d       REMOTE CONTROLLER    35.20                  %5.2f\n",rc, totalrc);
 printf("\n  %d       CD                  300.00                 %4.2f\n",cd, totalcd);
 printf("\n  %d       TAPE RECORDER       150.00                 %4.2f\n",tv, totaltv);
 printf("\n-------------------------------------------------------------------------\n");
 printf("\n                             SUBTOTAL               %4.2f\n", subtotal);
 printf("\n                                  TAX                %5.2f\n", tax);
 printf("\n                                TOTAL               %4.2f\n",total);
return 0; 
}