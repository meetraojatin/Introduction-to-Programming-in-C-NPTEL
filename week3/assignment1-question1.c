#include <stdio.h>

int find_factorial(int k){
   /* Write your code here*/
  int f;
  f=1;
  for(int i=1;i<k+1;i++){
    f=f*i;
  }
  return f;
    
}

int main(){
    int n,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        printf("%d ", find_factorial(k));
    }
    
    return 0;
}
