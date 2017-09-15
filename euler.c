#include <stdio.h>
#include <stdlib.h>

int smallest_mult(int test){
  int number;
  printf("%d \n",test);
  for(number = 1; number < 21;number++){
    if(test % number == 0){

    }
    else{
      return smallest_mult(test+1);
    }

  }

  return test;


}

//int result = smallest_mult(1);





int main(){
  printf("Smallest multiple of all ints from 1-20 is %d",smallest_mult(1));
  return 0;
}
