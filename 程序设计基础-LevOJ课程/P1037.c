#include<stdio.h>
int main(){
	int s=0,a,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		s+=a;
	}
	printf("%d",s);
	return 0;
}