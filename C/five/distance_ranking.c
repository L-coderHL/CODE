#include<stdio.h>
#include <math.h>
int main()
{
    int n, x[100][4], cache;
    float d;
    int i, j, k;

    scanf("%d %d %d", &n, &x[0][0], &x[0][1]);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d",&x[i][0], &x[i][1]);
        x[i][2] = pow(x[i][0] - x[0][0], 2) + pow(x[i][1] - x[0][1], 2);
        x[i][3] = i;
    }

    for(i = 1; i <= n; i++)
    {
        for(j = i + 1; j <= n; j++)
        {
            if(x[i][2] >= x[j][2])
            {
                if(x[i][2] > x[j][2])
                {
                    for(k = 0; k <=3; k++)
                    {
                        cache = x[i][k];
                        x[i][k] = x[j][k];
                        x[j][k] = cache;
                    }
                }
                else if(x[i][3] > x[j][3])
                {
                    for(k = 0; k <=3; k++)
                    {
                        cache = x[i][k];
                        x[i][k] = x[j][k];
                        x[j][k] = cache;
                    }
                }
                
            }

        }
    }

    printf("%d\n%d\n%d",x[1][3],x[2][3],x[3][3]);
    
    return 0;
}
