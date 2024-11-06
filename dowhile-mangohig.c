#include <stdio.h>

 
 int main(void){
 
     int number, ans;
     char choice;
     
     do
      {
         printf("Enter a number: ");
         scanf("%d", &number);
         for(int ctr = 0; ctr <= 10; ctr++)
         {
            ans = number * ctr;
            printf("%d * %d = %d\n", number, ctr, ans);
         }
         
     
       printf("Do you wanna build a snowman?");
       scanf("%c", &choice);
       fflush(stdin);
      }while(choice == 'y' || choice == 'Y');
      
     return 0;
     
 }