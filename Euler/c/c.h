int sumOfMultiplesOf3and5(int num){
   int sum = 0;
   for(int i = 0; i < num; i++){
       if((i % 3 == 0) || (i % 5 == 0)) {
          sum = sum + i;
       }
   }
   return sum;
}