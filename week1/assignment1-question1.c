#include <stdio.h>

int main(){
  
  int a,b,c,d,ad;
  
  scanf("%d %d %d %d", &a, &b, &c, &d);
  ad=a*100+b*10+c;
  
  if (ad>=d){
    printf("1");
  }
  else{
    printf("0");
  }
  
  return 0;
}
