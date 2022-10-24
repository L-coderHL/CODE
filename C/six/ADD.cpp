#include <stdio.h>
int main()
{
	float add(float, float);
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%.2f",add(a, b));
	return 0;
}

float add(float a, float b)
{
	float c;
	c = a + b;
	return (c);
}

