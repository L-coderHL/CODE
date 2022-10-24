#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, c = 1000;
    float p1, p2, p3, p4, p5;
    float a[5] = {0.015, 0.0210, 0.0275, 0.03, 0.0035};

    p1 = c * (1 + a[3] * 5);
    p2 = (c * (1 + a[1] * 2.0)) * (1 + a[2] * 3.0);
    p3 = (c * (1 + a[2] * 3.0)) * (1 + a[1] * 2.0);
    for(i = 0, p4 = c; i <= 4; i++)
    {
        p4 = p4 * (1 + a[0]);
    }
    for(i = 0, p5 = c; i <= 19; i++)
    {
        p5 = p5 * (1 + a[4]/ 4.0);
    } 
    printf("p1=%.2f\np2=%.2f\np3=%.2f\np4=%.2f\np5=%.2f", p1, p2, p3, p4, p5);







    return 0;
}