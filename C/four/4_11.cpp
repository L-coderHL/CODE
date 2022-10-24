#include <stdio.h>
int main ()
{
	int y,i;
	for(i=1;i<=99;i++){
		y=i*i-i;
		if(i*i<100){
			if(y%10==0){
				printf("%d\n",i);
			}
		}
		else{
			if(y%100==0){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
