#include <stdio.h>

int main() {
  int num, num1, num2;
  scanf("%d", &num);
  num1 = num;
  num2 = 0;
  while(num!=-1) {
    scanf("%d", &num);
    if(num1 < num) {
      num2 = num1;
      num1 = num;
    }
    if(num2 < num && num1 != num){
      num2=num;
    }
  }
  if(num2 != 0)
    printf("%d", num2);
  else
    printf("0");
  
  return 0;
}
