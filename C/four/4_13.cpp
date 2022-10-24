#include <stdio.h>
int main()
{
	for(int sum=100;sum<=200;sum++)
	{
		if(sum%4==2&&sum%7==3&&sum%9==5)
		printf("%d",sum);
	 } 
	return 0;
 } 
