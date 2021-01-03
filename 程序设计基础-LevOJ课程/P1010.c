#include<stdio.h>
int main(){
	int n,i,o[6],a;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		for(i=0;a;i++){
			o[i]=a%8;
			a/=8;
		}
		for(i--;i+1;i--)
			printf("%d",o[i]);
		printf("\n");
	}
	return 0;
}
