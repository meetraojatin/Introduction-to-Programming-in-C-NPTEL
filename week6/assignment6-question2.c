#include <stdio.h>
#include <string.h>
int main ()
{
  int i,j=0, rLen=0;
  char s[100];
  scanf("%s", s);

  int len = strlen(s);
  int count=0;
  for(i=0;s[i];i++)
  {
    rLen = 1;
    while (s[i] == s[i + 1]) {
            rLen++;
            i++;
        }
    if(rLen>count)
      count=rLen;
    
  }
 
    
  printf("%d",count);
  return 0;
}