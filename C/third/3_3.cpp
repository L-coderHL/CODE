#include <stdio.h>
int main()
{
	float a,c;
	char b;
	scanf("%f%c%f",&a,&b,&c);
	if(b=='+')
	{
		printf("%.2lf",a+c);
	}
	if(b=='-')
	{
		printf("%.2lf",a-c);
	}
	if(b=='*')
	{
		printf("%.2lf",a*c);
	}
	if(b=='/')
	{
		if(c==0)
		{
		printf("error");
		}
		else
    	{
    	printf("%.2lf",a/c);
		}
    }
	return 0;
}
 
