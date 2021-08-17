int sumOfMultiplesOf3and5(int num){
   int sum = 0;
   for(int i = 0; i < num; i++){
       if((i % 3 == 0) || (i % 5 == 0)) {
          sum = sum + i;
       }
   }
   return sum;
}

long evenFibonacciSum(long num) {
   long prev = 1, i = 0, sum = 0;
   long current = prev;
   long next = current + prev;
   while(current < num) {
       prev = current;
       if(current % 2 == 0) {         
          sum = sum + current;
       }
       current = next;
       next = prev + current;
       i++;
   }
   return sum;
}