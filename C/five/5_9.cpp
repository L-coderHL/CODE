#include <stdio.h>
#include <string.h>
int main ()
{
	int exchange(int a, int b);
	char trans(char a);
	char bubble(char a, char b);

	char str[100];
	char a[] = {"aeiouAEIOU"};
	char b[100]={"\0"};
	int i, j, k=0, l;
	
	gets(str);
	l = strlen(str);
	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= l; j++)
		{
			if(str[j] == a[i])
			{
				b[k] = a[i];				
				k++;
			}
		} 
	}
	
	for (i = 0; i <= k; i++)
	{
		for (j = i + 1; j <= k; j++)
		{
			bubble(b[i], b[j]);
		} 
	}
	puts(b);
	return 0;
}
int max(int a, int b)
{
	int m;
	if(a > b)
	{
		m = a;
	}
	else
	{
		m = b;
	}
	return m;
}


char trans(char a)
{
	if (int(a) >= 97)
	{
		a = a - 32;
	}
	return a;
}
char bubble(char a, char b)
{
	char trans(char a);
	char cache;
	if(trans(a) >= trans(b))
	{
		cache = b;
		b = a;
		a = cache;
	}
	return (a, b);
}
