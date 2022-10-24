
#include <stdio.h>
int prime(int num)
{
    int d = 1;
    int i, j;

    if(num == 1 || num == 2)
    {
        d = 1;
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i != 0)
            continue;
            d = 0;
        }       
    }
    return d;
}
//StudybarCommentBegin
int main()
{
	int i,num,bo;
	scanf("%d",&num);
	bo=prime(num);
	if(bo==1)  
    {
        printf("%s","yes");
    }
	else  
    {
        printf("%s","no");
    }
	return 0;
}
//StudybarCommentEnd