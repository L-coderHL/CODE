#include <stdio.h>
int main()
{
		int x,i,j,result;
		for(x=0,result=1,j=1;j<=20;j++){
			result=result*j;
			x=x+result;
		}
			printf("%d",x);
	return 0;
 } 
