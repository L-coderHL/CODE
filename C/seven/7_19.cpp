#include <stdio.h>
int main()
{
	char c[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int a;
	scanf("%d",&a);
	if(a > 12)
	{
		printf("Wrong!"); 
	}
	else
	{
		printf("%s",*(c + a - 1));
	}
}
