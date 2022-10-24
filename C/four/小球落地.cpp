#include <stdio.h>
int main()
{
	double h,M,N,i,d,c=0.5;
	scanf("%lf%lf",&M,&N);
	if(N==1){
		d=M;
	}
	else{
		for(d=M,i=2,h=c*M;i<=N;i++){
			d=d+2*h;
			h=c*h;
		}
		printf("%.2f %.2f",h,d) ;
	}
	
	return 0;
 } 
