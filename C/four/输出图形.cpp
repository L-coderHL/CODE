#include <stdio.h>
int main()
{
	int n,x,i,j;
	for(n=1;n<=4;n++){
		for(j=1;j<=4-n;j++){
			printf(" ");
		}
		for(i=1;i<=2*n-1;i++){
			printf("*");
		}
		printf("\n");
		}
	
	for(n=1;n<=3;n++){
		for(j=1;j<=n;j++){
			printf(" ");
		}
		for(i=1;i<=7-2*n;i++){
			printf("*");
		}
		if(n==3) break;
		printf("\n");
	}
	return 0;
 } 
