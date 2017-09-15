#include <stdio.h>
#include <stdlib.h>

int smallest_mult(){
  int number;
  int test;
  for(test = 20; 1==1;test+= 20){
    //printf("%d \n",test);
    // Tests modulo 1-20
    int works = 1;

    for(number = 1; number < 21;number++){
      //printf("Test: %d, Num: %d\n",test,number);
      if(test % number != 0){
	works = 0;
	break;
      }
    }
      
    if (works == 1){
      return test;
    }
  }
  return 0;

}

int biggiePrime(){
  int test;
  int counter;
  for(test = 2;counter < 10002;test++){

    int isPrime = 1;
    int i;
    for(i=2;i<test;i++){
      if(test%i == 0){
	isPrime = 0;
      }
    }
    
    if(isPrime == 1){
      counter++;
    }


    
  }

}





int main(){
  printf("The smallest multiple of all ints from 1-20 is %d \n",smallest_mult());
  printf("The 10001st prime is %d \n", biggiePrime());
  return 0;
}
