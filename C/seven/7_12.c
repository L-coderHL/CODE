#include <stdio.h>
int main()
{
    double a[3][4] = {65,67,70,60,80,87,90,81,90,99,100,98};
    void average(double (*p)[4]);
    void score(double (*p)[4]);

    average(a);
    score(a);
    return 0;
}
void average(double (*p)[4])
{
    int sum;
    int i;
    double z;
    for(i = 0; i <= 11; i++)
    {
        sum = sum + *(*p + i);
    }
    z = 1.0 / 12 * sum;
    printf("average = %.2f\n",z);
}
void score(double (*p)[4])
{
    int i;
    printf("the score of NO.3 are:\n");
    for(i = 0; i <= 3; i++)
    {
        printf("%.2f",*(*(p + 2) + i));
        if(i == 3) break;
        printf(" ");
    }
}
