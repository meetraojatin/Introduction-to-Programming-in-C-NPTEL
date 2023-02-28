#include <stdio.h>
#include <string.h>
#define SIZE 100
int main ()
{
  int i,j=0;
  int n=0;
  int l=0;
  
  scanf("%d", &n);
  scanf("%d", &l);
  int src[n][n];
  int dst[n][n];
  if(n >= 2*l+1){
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
    	scanf("%d",&src[i][j]);
     }
  }
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
       
      if(i==0 &&j==0){
        dst[i][j]=src[i][j]+src[i+1][j]+src[i][j+1]+src[i+1][j+1];
        
      }else if(i==0 && j!=0 & j<n-1){
        
        dst[i][j]=src[i][j]+src[i+1][j]+src[i][j+1]+src[i+1][j+1]+src[i][j-1]+src[i+1][j-1];
        
      }else if(i == 0 && j==n-1){
        
        dst[i][j]=src[i][j]+src[i][j-1]+src[i+1][j-1]+src[i+1][j];
        
      }else if (j==0 && i!=0 && i<n-1){
        
        dst[i][j]= src[i][j]+src[i-1][j]+src[i-1][j+1]+src[i][j+1]+src[i+1][j]+src[i+1][j+1];
        
      }else if (j==0 && i==n-1){
        
        dst[i][j]=src[i][j]+src[i-1][j]+src[i-1][j+1]+src[i][j+1];
      }else if(i==(n-1) && j==(n-1)){
        
        dst[i][j]=src[i-1][j-1]+src[i-1][j]+src[i][j-1]+src[i][j];
        
      }else if (i!=0 && j==n-1){
        
        dst[i][j]=src[i][j]+src[i-1][j-1]+src[i-1][j]+src[i][j-1]+src[i+1][j-1]+src[i+1][j];
        
      }else if(i==n-1 && j<n-1){
        
      	 dst[i][j]=src[i][j]+src[i-1][j-1]+src[i-1][j]+src[i-1][j+1]+src[i][j-1]+src[i][j+1];
        
      }else if(j==n-1 && i<n-1){
        
      	 dst[i][j]=src[i][j]+src[i-1][j-1]+src[i-1][j]+src[i][j-1]+src[i+1][j-1]+src[i][j+1];
      
      }else{
        
        dst[i][j]=src[i][j]+src[i-1][j-1]+src[i-1][j]+src[i-1][j+1]+src[i][j-1]+src[i][j+1]+src[i+1][j-1]+src[i+1][j]+src[i+1][j+1];
       
      }
     }
     
  }
  
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      printf("%d ", dst[i][j]);
    
    }
    printf("\n");
    
  }
  }
  return 0;
}