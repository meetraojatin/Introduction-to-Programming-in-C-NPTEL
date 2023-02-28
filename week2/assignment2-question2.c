#include <stdio.h>

int main() {
  int num, count = 1;
  scanf("%d", &num);
  
  while(num!=-1) {
    int x, y;
    x = num;
    scanf("%d", &num);
    y = num;
    if((x!=y) && (num!=-1))
      count++;
  }
  
  printf("%d",count);
   
  return 0;
}
