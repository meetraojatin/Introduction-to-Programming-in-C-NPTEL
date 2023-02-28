#include <stdio.h>
#include <string.h>
int main ()
{
  int i, j, count =0;;
  char s[100], t[100];
  scanf("%s", s);
  scanf("%s", t);

  int flag = 0;
  int len = strlen(s);
  int lent =strlen(t);
  if(strlen(s)!=strlen(t)){
    printf("-1");
    return 0;
  }
  
  for(i=0;i<len;i++)
  {
    for(j=0;j< lent; j++){
      if (s[i]==t[j]){
          flag = 1;
          break;  	
         
      }else{
        flag = 0;
      }
    }
    if(flag ==0){
    printf("-1");
    return 0;
  }
  }
  
  for(i=0;i < len; i++)
  {
      if (s[i]==t[i]){
          count++;
      }
  }
  printf("%d", count);
  
  return 0;
}
