#include <stdio.h>
int main()
{
	int a,b,c,i,sum;
	
	for(a=0;a<=20;a++){
		for(b=1;b<=33;b++){
			c=100-a-b;
			if(5*a+3*b+1/3.0*c==100){
				printf("%d %d %d\n",a,b,c);
			}
		}	
	}
	return 0;
}
