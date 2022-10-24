//StudybarCommentBegin
#include <stdio.h>
int main()
{
char str1[100], str2[100];
void strconnect(char *,char *);
scanf("%s", str1);
scanf("%s", str2);
strconnect(str1, str2);
printf("%s", str1);
}

//StudybarCommentEnd

void strconnect(char *s1, char *s2)
{
	int i, j;
	for(i = 0; ; i++)
	{
		if(*(s1 + i) != '\0')
		continue;
		for(j = 0; *(s2 + j) != '\0'; j++)
		{
			s1[i + j] = s2[j]; 
		}
		*(s1 +i + j) = '\0';
		break;
	}
}
