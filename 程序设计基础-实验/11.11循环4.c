#include<stdio.h>
int main(){
	int a[40],b[40],n,i,j;
	while(scanf("%d",&n)+1){
		a[0]=b[0]=0;a[1]=1;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				b[j]=a[j-1]+a[j];
				printf("%4d",b[j]);
			}
			b[j]=0;
			for(j=1;j<i+2;j++)
				a[j]=b[j];
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
