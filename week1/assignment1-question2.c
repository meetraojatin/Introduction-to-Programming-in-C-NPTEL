#include <stdio.h>

int main(){
  int M,N,div;
  
  scanf("%d %d",&M,&N);
  div=M%N;
  
  if (div==0){
    printf("1");
  }else{
    printf("0");
  }
  
  return 0;
}
