#include<stdio.h>
int main()
{
    char PS[1000], S[10], c;
    char *ptr=PS, *ptr2=S;
    int i=0;
    scanf("%s",ptr);
    getchar();
    scanf("%c",&c);
    scanf("%s",ptr2);
    
    for( i=0;ptr[i]!='\0';i++)
    {
        if(ptr[i]==c)
        {
        printf("%s",ptr2);
        
        }
        else
        printf("%c",ptr[i]);
        
    }
return 0;    
}
