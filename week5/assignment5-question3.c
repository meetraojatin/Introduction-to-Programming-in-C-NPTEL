#include <stdio.h>
int arrproduct(int n, int arr[]) {

  if(n==4){
    return (arr[0]*arr[3]-arr[1]*arr[2]);
  }else{
    int k=n/4;
    int temp[k];
    int j=0;
    int l=0; 
    for (j=0;j<k;j++){
     
      temp[l]= arr[4*j]*arr[4*j+3]-arr[4*j+1]*arr[4*j+2];
      l++;
      
    }
    return arrproduct(k,temp);
  }
}

int main() {
  	int m,i;
	scanf("%d",&m);
	int a[m];	
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
  int product = arrproduct(m, a);
	printf("%d", product);
	return 0;
} 
