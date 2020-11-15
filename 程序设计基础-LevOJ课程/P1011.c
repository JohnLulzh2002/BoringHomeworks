#include<stdio.h>
int main(){
	int n,a,b[16],i;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		for(i=0;a;i++){
			b[i]=a%2;
			a/=2;
		}
		for(i--;i+1;i--)
			printf("%d",b[i]);
		printf("\n");
	}
	return 0;
} 
