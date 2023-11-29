#include <stdio.h>
int main()
{
    int TV, VCR, CD, RC, TAPE;
    float TVprice, VCRprice, CDprice, RCprice, TAPEprice;
    float TOTALTV, TOTALVCR, TOTALRC, TOTALCD, TOTALTAPE, SUBTOTAL, TAX, TOTAL;

    printf("How many TVs were sold?\t\t\t");
    scanf("%d", &TV);
    printf("How many VCRs were sold?\t\t");
    scanf("%d", &VCR);
    printf("How many Remote Controllers were sold?\t");
    scanf("%d", &RC);
    printf("How many CDs were sold?\t\t\t");
    scanf("%d", &CD);
    printf("How many TAPE Recorders were sold?\t");
    scanf("%d", &TAPE);

    TVprice = 400;
    VCRprice = 220;
    RCprice = 35.20;
    CDprice = 300;
    TAPEprice = 150;
    TOTALTV = TVprice * TV;
    TOTALVCR = VCRprice * VCR;
    TOTALRC = RCprice * RC;
    TOTALCD = CDprice * CD;
    TOTALTAPE = TAPEprice * TAPE;
    SUBTOTAL = (float)(TOTALTV + TOTALVCR + TOTALRC + TOTALCD + TOTALTAPE);

    TAX = (float)(SUBTOTAL * 0.0825);
    TOTAL = SUBTOTAL + TAX;

    printf(" QTY\tDESCRIPTION\t\tUNIT PRICE\tTOTAL PRICE \n");
    printf("-----------------------------------------------------------------\n");
    printf("%d\tTV\t\t\t%4.2f\t\t%4.2f\n",  TV, TVprice, TOTALTV);
    printf("%d\tVCR\t\t\t%4.2f\t\t%4.2f\n", VCR, VCRprice, TOTALVCR);
    printf("%d\tREMOTE CONTROLLER\t %4.2f\t\t %4.2f\n", RC, RCprice, TOTALRC);
    printf("%d\tCD PLAYER\t\t%4.2f\t\t%4.2f\n", CD, CDprice, TOTALCD);
    printf("%d\tTAPE RECORDER\t\t%4.2f\t\t %4.2f\n", TAPE, TAPEprice, TOTALTAPE);
    printf("----------------------------------------------------------------\n");
    printf("\t\t\t\tSUBTOTAL\t%4.2f\n", SUBTOTAL);
    printf("\t\t\t\tTAX\t\t %4.2f\n", TAX);
    printf("\t\t\t\tTOTAL\t\t%4.2f\n", TOTAL);
    return 0;
}