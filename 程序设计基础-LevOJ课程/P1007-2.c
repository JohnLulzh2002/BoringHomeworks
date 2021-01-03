#include<stdio.h>
int gcd(int a,int b){
	int c;
	if(a<b){c=a;a=b;b=c;}	//a>b
	while(c=a%b){
		a=b;b=c;
	}
	return b;
}
int main(){
	int n,a,b,c;
	for(scanf("%d",&n);n;n--){
		scanf("%d%d%d",&a,&b,&c);
		printf("%d\n",gcd(a,gcd(b,c)));
	}
	return 0;
}