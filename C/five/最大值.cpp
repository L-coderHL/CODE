#include <stdio.h>
int main()
{
	int a[10];
	int i,j;
	int sum=0;
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int max=a[0];
	for(j=0;j<10;j++){
		if(a[j]>max){
			max=a[j];
		}
	}
	printf("%d",sum);
	printf(" %d",max);
	return 0;
}
