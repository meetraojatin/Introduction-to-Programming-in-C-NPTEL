#include<stdio.h>
int main() {
  
  int N, val, lower = 1, upper = 1;
  scanf("%d", &N);
  
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      scanf("%d", &val);
      
      if(i>j && val!=0)
        upper = 0;
      if(i<j && val!=0)
        lower = 0;   
    }
  }
  if(upper == 1)
    printf("1");
  else
    printf("0");
    
  return 0;
}
