#include <stdio.h>
int main()
{
	int x,y,n,c,i;
	scanf("%d",&n);
	for(i=1,x=1,c=2*n+1;c>=1;c=c-2,i++)
	{
		
		for(y=1;y<=c;y++)
		{
		if (x!=9)
		{
			printf("%d",x);
			x++;
		}
		else
		{
			printf("%d",x);
			x=1;
		}
		}
		y=1;
		if(c==1) break;
		printf("\n%*s",i,"");
	}
		printf("\n%*s",i-2,"");
	for(c=3,i-=3;c<=2*n+1;c=c+2,i--)
	{
		
		for(y=1;y<=c;y++)
		{
		if (x!=9)
		{
			printf("%d",x);
			x++;
		}
		else
		{
			printf("%d",x);
			x=1;
		}
		}
		if(c==2*n+1) break;
		printf("\n%*s",i,"");
		y=1;
	}

	return 0;
 } 
