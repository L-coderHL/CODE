#include <stdio.h>
int main()
{
	int x,y,t;
	scanf("%d",&x);
	for(t=1;x!=1;){
		if(x%2==1){
			x=3*x+1;
		}
		else{
			x=x/2;
		}
		if(x>=t){
			t=x;
		}
	}
	printf("%d",t);
	return 0;
 } 
