#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, k, max, max_last = 0;
    char b[100];
    int c[6] = {0};
    char t[7] = {"?!,.:;"}; 
    gets(b);
    for(i = 0; b[i] != '\0'; i++)
    {
        if(b[i] == '?')
        {
            c[0]++;
            
        }
        else if(b[i] == '!')
        {
            c[1]++;
        }
        else if(b[i] ==',')
        {
            c[2]++;
        }
        else if(b[i] == '.')
        {
            c[3]++;
        }
        else if(b[i] == ':')
        {
            c[4]++;
        }
        else if(b[i] == ';')
        {
            c[5]++;
        }
        for(i = 0; i <= 4; i++)
        {
            for(j = i + 1, max = c[i], k = i; j <= 4; j++)
            {
                if(max < c[j])
                {
                    k = j;
                    max = c[j];               
                }
            }
            if(max_last <= max)
            {
                printf("%c", t[k]);
                max_last = max;
            }          
        }
    }
    return 0;
}
