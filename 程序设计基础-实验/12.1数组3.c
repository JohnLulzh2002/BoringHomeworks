#include <stdio.h>
int main(){
	int a[3][5],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("%d ",&a[i][j]);
		printf("\n");
	}
	/*
	printf("\n");
	for(i=0;i<3;i++)
		printf("%d:%d ",&a[i],a[i]);
	printf("\n%d:%d\n\n\n",&a,a);
	int b[3];
	for(i=0;i<3;i++){
		printf("%d ",&b[i]);
	}
	printf("\n");
	*/
	return 0;
}