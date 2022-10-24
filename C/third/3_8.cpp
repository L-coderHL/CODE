#include <stdio.h>
int main()
{
	int grade;
	char c;
	scanf("%d",&grade);
	if(grade>=90)
	{
		c='A';
	}
	else
	{
		if(grade>=60&&grade<=89)
	    {
			c='B'; 
	    }
		else 
		{
			c='C';
		}
	}
	printf("%d belongs to %c.",grade,c);
	return 0;
}

