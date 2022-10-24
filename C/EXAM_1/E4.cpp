#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, k, max, max_last = 0;
    char b[100];
    int c[6] = {0};
    char a[7] = {"?!,.:;"}; 
    gets(b);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(b[i] == '?')
        {
            c[0]++;
            
        }
        else if(b[i] = '!')
        {
            c[1]++;
        }
        else if(b[i] = ',')
        {
            c[2]++;
        }
        else if(b[i] = '.')
        {
            c[3]++;
        }
        else if(b[i] = ':')
        {
            c[4]++;
        }
        else if(b[i] = ';')
        {
            c[5]++;
        }
        for(i = 0; i <= 9; i++)
        {
            for(j = 0; j <= 9; j++)
            {
                
            }
        }
        
        
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    

scanf("%d", &a);

for(i = 0; i <= 9; i++)
{
    for(j = 0; j <= 9; j++)
    {
        scanf("%d", &);
    }
}






    return 0;
}

int leapyear(int x)
{
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    return leap;
}


long factorial(int n)
{
    long x;
    if(n == 1 || n == 0)
    {
        x = 1;
    }
    else
    {
        x = n * factorial(n - 1);
    }
    return x;
}