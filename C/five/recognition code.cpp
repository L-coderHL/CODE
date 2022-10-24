#include <stdio.h>
#include <string.h>
int main () 
{
	char str[14]={'\0'};
	int i, sum=0, n = 1, r, t;
	gets(str);
	
	for(i = 0; i <= 12; i++)
	{
		if(str[i] == '-')
		{
			continue;
		}
		t = int(str[i])-48;
		sum = sum + t * n;
		n++;
	}
	r = sum % 11;
	
	if('r' == str[13])
	{
		printf("Right");
	}
	else
	{
		for(i = 0; i <= 12; i++)
		{
			printf("%c", str[i]);
			printf("%d", r);
		}
		
	}
	return 0;
}
