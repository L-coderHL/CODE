//StudybarCommentBegin
#include <string.h>
#include <stdio.h>
int CountSubstr( char *s1, char *s2 );

int main()
{
	char s1[100], s2[100];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%d", CountSubstr(s1, s2));
}
//StudybarCommentEnd
#include <string.h>
int CountSubstr( char *s1, char *s2 )
{
    int l2;
    int i, j;
    int count = 0;
    l2 = strlen(s2);
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] != s2[0]) continue;
        for(j = 1; j < l2; j++)
        {
            if(s1[i + j] != s2[j]) break;
        }
        if(j == l2)
        {
            count++;
        }
    }
    return count;
}