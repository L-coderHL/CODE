#include <stdio.h>
int main()
{
	int a,b,c,leap,sum;
	scanf ("%d,%d,%d",&a,&b,&c);
		
	leap=0;
	if (a%400==0||a%4==0&&a%100!=0)
	{
		leap=1;
	}
	
	switch(b)
	{
		case 1:sum = 0;break;
		case 2:sum = 31;break;
		case 3:sum = 59;break;
		case 4:sum = 90;break;
		case 5:sum = 120;break;
		case 6:sum = 151;break;
    	case 7:sum = 181;break;
		case 8:sum = 212;break;
		case 9:sum = 243;break;
		case 10:sum = 273;break;
		case 11:sum = 304;break;
		case 12:sum = 334;break;
	}
		if(leap==0||leap==1&&b<=2)
		{
			sum=sum+c;
		}
		else
		{
			sum=sum+c+1;
		}
	
	if (b<0||b>12||c<0||c>31||leap==0&&b==2&&c>28||leap==1&&b==2&&c>29)
	{
		printf("data error.");
	}
	else
	{
		printf("It is the %dth day.",sum);
	}
	return 0;

}
