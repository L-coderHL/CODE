//StudybarCommentBegin
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
char* insert(char* s1,char* s2,int n)
{
    int i, j = 0;
    char temp[100];
    for(i = n; s1[i] !='\0'; i++)
    {
        temp[j] = s1[i];
        j++ ;
    }
    s1[n] = '\0';
    temp[j] = '\0';
    strcat(s1,s2);
    strcat(s1,temp);
    return s1;
}