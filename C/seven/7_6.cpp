#include <stdio.h>
int main()
{
	int x[10];
	void in_num(int *x);//输入10个数；
	void exchange(int *x);//进行交换处理；
	void out_num(int *x);//输出10个数。
	
	in_num(x);
	exchange(x);
	out_num(x);
}
void in_num(int *x)//输入10个数；
{
	int i;
	for(i = 0; i <= 9; i++)
	{
		scanf("%d",x + i);
	}	
}

void exchange(int *x)//进行交换处理；
{
	int i, j, k;
	int *max, *min;
	void swag(int *a, int *b);
	
	for(i = 0, max = x, min = x; i<= 9; i++)
	{
		if(*max < *(x + i))
		{
			max = x + i;
		}
		if(*min > *(x + i))
		{
			min = x + i;
		} 
	}
	swag(x,min);
	swag(x + 9, max);
}
void swag(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
} 
void out_num(int *x)//输出10个数。
{
	int i;
	for(i = 0; i <= 9; i++)
	{
		printf("%d",*(x + i));
		if(i == 9) break;
		printf(" ");
	}
}
