#include <stdio.h>
int main()
{
    int TV, VCR, CD, RC, TAPE;
    float TOTALTV, TOTALVCR, TOTALRC, TOTALCD, TOTALTAPE, SUBTOTAL, TAX, TOTAL;

    printf("How many TVs were sold?\t");
    scanf("%d", &TV);
    printf("How man* VCRs were sold?\t");
    scanf("%d", &VCR);
    printf("How many Remote Controllers were sold?\t");
    scanf("%d", &RC);
    printf("How many CDs were sold?\t");
    scanf("%d", &CD);
    printf("How many TAPE Recorders were sold?\t");
    scanf("%d", &TAPE);

    TOTALTV = 400 * TV;
    TOTALVCR = 220 * VCR;
    TOTALRC = 35.20 * RC;
    TOTALCD = 300 * CD;
    TOTALTAPE = 150 * TAPE;
    SUBTOTAL = (float)(TOTALTV + TOTALVCR + TOTALRC + TOTALCD + TOTALTAPE);

    TAX = (float)(SUBTOTAL * 0.0825);
    TOTAL = SUBTOTAL + TAX;

    printf(" QTY\tDESCRIPTION\t\tUNIT PRICE\tTOTAL PRICE \n");
    printf("-----------------------------------------------------------------\n");
    printf("%d\tTV\t\t\t400.00\t\t%4.2f\n", TV, TOTALTV);
    printf("%d\tVCR\t\t\t220.00\t\t%4.2f\n", VCR, TOTALVCR);
    printf("%d\tREMOTE CONTROLLER\t 35.20\t\t  %5.2f\n", RC, TOTALRC);
    printf("%d\tCD PLAYER\t\t300.00\t\t %4.2f\n", CD, TOTALCD);
    printf("%d\tTAPE RECORDER\t\t150.00\t\t%4.2f\n", TV, TOTALTV);
    printf("----------------------------------------------------------------\n");
    printf("\t\t\t\tSUBTOTAL\t%4.2f\n", SUBTOTAL);
    printf("\t\t\t\tTAX\t\t %5.2f\n", TAX);
    printf("\t\t\t\tTOTAL\t\t%4.2f\n", TOTAL);
    return 0;
}
