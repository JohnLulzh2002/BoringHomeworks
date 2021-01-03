#include<stdio.h>
int main(){
	long long s=0;
	int a,n;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		s+=a;
	}
	printf("%lld",s);
	return 0;
}
