#include <stdio.h>

int main()
{
int sum;
int x = 5;
int y = -5;
int z = 10;
sum = x * (x + z) + y;
sum = sum * (sum - x * z) ;
sum = sum / 100;
printf("%d\n",sum);
return 0;

}
