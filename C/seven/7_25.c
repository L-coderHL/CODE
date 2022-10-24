#include <stdio.h>
int main()
{
    float score[3][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*pointer)[4],int);
    float *p;
    int i, j, x[3], k;

    for(i=0; i<3; i++)
    {
        p = search(score, i);
        for(j = 0, k = 0; j <= 3; j++)
        {
            if(*(p + j) < 60) 
            {
                k = 1;
            }
        }
        if(k == 1)
        {
            printf("%d:",i);
            for(j = 0, k = 0; j <= 3; j++)
            {   
                printf("%5.2f",*(p + j));
                if(j != 3)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        
    }
    
    return 0;
}

float *search(float (*pointer)[4],int n)
{ 
    float *pt;
    pt=*(pointer + n);
    return(pt);
}
