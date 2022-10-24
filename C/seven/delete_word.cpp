//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
int main()
{
void GetOthers(char s[]);
char str[100];
gets(str);
GetOthers(str);
printf("%s",str); 
}

//StudybarCommentEnd
void GetOthers(char s[])
{
	int i, j;
	char b[100];
	for(i = 0, j = 0; *(s + i) != '\0'; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'z')
		continue;
		b[j] = s[i];
		j++;		 
	}
	b[j] = '\0';
	strcpy(s, b);
}
