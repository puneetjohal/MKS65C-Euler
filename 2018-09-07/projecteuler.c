#include <stdio.h>

int main(){
  //problem 1
  int i,sum;
  for (i=1 ; i<=1000 ; i+=1){
    if (i%3==0 || i%5==0){
      sum += i;
    }
  }
  printf("Sum of all multple of 3 or 5 between 0 and 1000: %d \n",sum);
  //problem 5
  bool divis = false;
  int num = 0;
  int k;
  while (!divis){
    num+=1;
    divis = true;
    for (k=1 ; k<=20 ; k+=1){
      if (num%k != 0){
        divis = false;
      }
    }
  }
  printf("Smallest number divisible by all numbers from 1 to 20: %d \n", num);
  return 0;
}
