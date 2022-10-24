//StudybarCommentBegin
#include <string.h>
#include <stdio.h>
char* insert(char* s1,char* s2,int n);
int main() 
{ 
int n;
char s1[100], s2[100];
char *ss;
scanf("%s", s1);
scanf("%s", s2);
scanf("%d", &n);
ss=insert(s1,s2,n);
printf("%s",ss);
}

//StudybarCommentEnd
#include <string.h>
#include <stdlib.h>
char *insert(char* s1,char* s2,int n)
{
	
	char *s=(char *)malloc(100*sizeof(char));
	char s3[100];
	int i, j;
	for(i = n, j = 0; s1[i] != '\0'; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	s3[j] = '\0';
	s1[n] = '\0';
	strcpy(s, s1);
	strcat(s, s2);
	strcat(s, s3);
	return s;
}
