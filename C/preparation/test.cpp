//StudybarCommentBegin
//StudybarCommentBegin
#include <stdio.h>
int main()
{
	int convert(int year,int month,int day);
        int year, month,day,flag;
        char *week;
        scanf("%d%d%d",&year, &month, &day);
        flag=convert(year,month,day);
        switch (flag)
        {   case  0:  week="Sunday";  break;
             case  1:  week="Monday";  break;
             case  2:  week="Tuesday";  break;
             case  3:  week="Wednesday";  break;
             case  4:  week="Thursday";  break;
             case  5:  week="Friday";  break;
             case  6:  week="Saturday";  break;
             case -1:  
                             week="input error!";  
         }
         puts(week);
        return 0;
}
//StudybarCommentEnd
//StudybarCommentEnd
int convert(int year, int month, int day)
{
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i, sum = 0, t;
	int lp(int);
	
	for(i = 0; i < month-1; i++)
	{
		sum = sum + a[i];
	}
	sum += day;
	if(lp(year) == 1 && month > 2)
	{
		sum += 1;
	}
	printf("%d\n",t); 
	t = sum % 7;
	return t;
}

int lp(int y)
{
	int leap;
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		leap = 1;
	}
	else
	{
		leap = 0;
	}
	return leap;
}
