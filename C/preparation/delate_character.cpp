#include <stdio.h>
#include <string.h>
char delstring(char *str1,char *str2)
{
	int l1, l2;
	int i, j, k;
	char c = '\0';
	void offset(char *str, int j, int n);
	
	l1 = strlen(str1);
	l2 = strlen(str2);
	for(i = 0, k = 0; i < l1; i++)
	{
		if(str1[i] != str2[0])
		continue;
		for(j = 1; j < l2; j++)
		{			
			if(str1[i + j] != str2[j])
			break;			
		}
		if(j == l2)
		{
			k++;
			offset(str1, i, l2);
		}
	}
	if(l1 == k * l2)
	{
		c = 'k'	;
	}
	else if(k == 0)
	{
		c = 'n';
	}
	return c;
} 

void offset(char *c ,int j, int n)
{
	int l, i;
	if(n == 0)
	{
		1;
	}
	else
	{
		l = strlen(c);	
		for(i = j; i < l - 1; i++)
		{
			*(c + i) = *(c + i + 1);				
		}
		*(c + l - 1) = '\0';
		n--;
		offset(c, j, n);		
	}		
}			

//StudybarCommentBegin
int main()
{
	char a[30],b[30];
	char *str1=a,*str2=b;
l:	gets(str1);
	gets(str2);
	if(delstring(str1,str2)=='n') printf("Pass");
	else if(delstring(str1,str2)=='k') printf("Empty");
	else puts(str1);
	goto l;
	return 0;
}
//StudybarCommentEnd
