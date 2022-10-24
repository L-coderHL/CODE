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