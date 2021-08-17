#include <stdio.h>
#include "c.h"

int main() {
   int np1 ;
   printf("Enter number\n");
   scanf("%d", &np1);
   printf("The sum of multiples of 3 and 5 below number %d is %d\n", np1, sumOfMultiplesOf3and5(np1));

   long np2;
   printf("Enter fibonacci max number");
   scanf("%ld", &np2);
   printf("The sum of evenFibonacci below number %ld is %ld", np2, evenFibonacciSum(np2));
}