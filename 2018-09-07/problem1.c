#include <stdio.h>

int main(){
  int i,sum;
  for (i=1 ; i<=1000 ; i+=1){
    if (i%3==0 || i%5==0){
      sum += i;
    }
  }
  printf(sum + "\n");
  return 0;
}
