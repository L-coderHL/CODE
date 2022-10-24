//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
int main()
{
	void copystr(char *,char *,int);
        int m;
        char str1[20],str2[20];
        gets(str1);
        scanf("%d",&m);
        if(strlen(str1)<m)  printf("input error!");
        else
        {
  	        copystr(str1,str2,m);
                printf("%s",str2);
        }
        return 0;
}

//StudybarCommentEnd
void copystr(char *str1,char *str2,int m)
{
    int i, j;
    for(i = m - 1, j = 0; str1[i] != '\0'; i++)
    {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
}