#include <stdio.h>

int main() {
  int num, num1, num2;
  float avg;
  scanf("%d", &num);
  num1 = num;
  num2 = 0;
  while(num!=-1) {
    num2=num1;
    scanf("%d", &num);
    num1=num;
    if(num1==-1){
      break;
    } 
    avg=(( num1 + num2 )*0.5);
    printf("%.1f ",avg);
    avg=0;
  }
  return 0;
}
