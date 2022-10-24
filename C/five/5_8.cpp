#include<stdio.h>
int main()
{
	int a[2][3],b[3][2];
	int i,j;
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			b[j][i]=a[i][j];
		}
	}
	for (j=0;j<=2;j++){
		for(i=0;i<=1;i++){
			printf("%5d",b[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
