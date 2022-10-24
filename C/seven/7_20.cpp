#include <stdio.h>
int main()
{
	char a[20] = {"reading_room"};
	char *f(int, char *);
	char *p = a;
	int x;
	
	scanf("%d", &x);
	if(x >= 13)
	{
		printf("error!");
	}
	p = f(x,p);
	puts(p);
} 
char *f(int x, char *p)
{
	p = p + x - 1;
	return p;
//	for(i = 0; p[i] !0 '\0',i++)
//	{
//		printf("%c",*(p - 1 + x++));	
//	}
}
