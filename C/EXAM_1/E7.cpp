#include <stdio.h>
#include <math.h>
#include <string.h>
//StudybarCommentBegin
    int main()
    {double wage[50],maxwage,minwage,avewage;
    int n;
    scanf("%d",&n);
    input(wage,n); 
    avewage=calculate(wage,n,&maxwage,&minwage);
    printf("maxwage=%.2f,minwage=%.2f,avewage=%.2f\n",maxwage,minwage,avewage);
    return 0;
    }
//StudybarCommentEnd
calculate(wage,n,&maxwage,&minwage)
{
    for(i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    for(i = 0, max = a[0]; i < x; i++)
    {
        if(max < a[j])
        {
            max = a[j];               
        }
    }

    for(i = 0, min = a[0]; i < x; i++)
    {
        if(min > a[j])
        {
            min = a[j];               
        }
    }
}