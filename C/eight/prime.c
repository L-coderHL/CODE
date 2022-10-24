#include <stdio.h>

//StudybarCommentBegin
int main()
{
	int i,num,bool;
	scanf("%d",&num);
	bool=prime(num);
	if(bool==1)  printf("%s","yes");
	else  printf("%s","no");
	return 0;
}
//StudybarCommentEnd
int prime (int a)
{
    int i;
    int c;

    for(i = 2, c = 1; i <= a / 2; i++)
    {
        if(a == 2)
        {
            c = 1;
        }
        else
        {
            if (a % i == 0)
            {
                c = 0;
                break;
            } 
            else
            {
                c = 1;
            }
        }
        
    }
    return c;
}
