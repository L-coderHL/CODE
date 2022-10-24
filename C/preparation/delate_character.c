//StudybarCommentBegin
int main()
{
	char a[30],b[30];
	char *str1=a,*str2=b;
	gets(str1);
	gets(str2);
	if(delstring(str1,str2)=='n') printf("Pass");
	else if(delstring(str1,str2)=='k') printf("Empty");
	else puts(str1);
	return 0;
}
//StudybarCommentEnd