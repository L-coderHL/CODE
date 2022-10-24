#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, k=0, x, y;
	int a[5], b[5], c[4]; 
	for(i = 0; i <= 4;i ++ ){
		scanf("%d", &a[i]);
		for(j=0; j<=3; j++){
			c[j] = (a[i] / int(pow(10,j))) % 10;
		}
		x = c[0] + c[2];
		y = c[1] + c[3];
		
		if(x==y){
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<=k-1;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
}
