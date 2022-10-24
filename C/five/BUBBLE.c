#include <stdio.h>
#include <string.h>
int main ()
{
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
    char cache;
    for (i = 0; i <= k-1; i++)
	{
		for (j = i+1; j <= k-1; j++)
		{
	        if(b[i] >= b[j])
	        {
                cache = b[i];
                b[i] = b[j];                                             
		        b[j] = cache;
	        }
		}
	} 
    puts(b);
}


    