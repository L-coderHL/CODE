#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int grade;
    char level;
    scanf("%d", &grade);
    if(grade >= 90)
    {
        level = 'A';
    }
    else if(grade >= 60 && grade <= 89)
    {
        level = 'B';
    }
    else
    {
        level = 'C';
    }
    printf("%d belongs to %c.", grade, level);

    return 0;
}