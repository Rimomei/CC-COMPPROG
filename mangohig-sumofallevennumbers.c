#include <stdio.h>

 
 int main(void){
 
     int num, even, sum = 0;
       {
         printf("Enter the first number until: ");
         scanf("%d", &num);
         printf("numbers that are even to be printed until the number: %d\n", num);
         
         
         
       for (even = 1; even <= num;)
       { 
        {
           if(even%2 == 0) // Check if 'i' is even
           sum = even + sum;
           printf("%d\t", even); // Print 'i' if it's even
        }
        even++; //moves up the count to the next even number
       }
      } 
      printf("\n%d is the sum of all even numbers", sum); // so taht it takes all the numbers before printing
     return 0;
     
 }