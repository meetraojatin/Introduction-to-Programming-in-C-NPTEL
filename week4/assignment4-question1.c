#include<stdio.h>
int main()
{
	int n,m,i,j,c=0,temp,f=0;
	scanf("%d",&n);
	int a[n];	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];         
     			a[j] = a[j+1];
      			a[j+1] = temp;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("%d",a[i]);
			f=1;
			break;
		}
		else
		{
			c=0;
		}
	}
	if(f==0)
	{
		printf("0");
	}
	return 0;
}
