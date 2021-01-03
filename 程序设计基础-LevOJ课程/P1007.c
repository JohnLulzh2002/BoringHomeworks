#include<stdio.h>
int main(){
	int n,a,b,c;
	for(scanf("%d",&n);n>0;n--){
		scanf("%d%d",&a,&b);
		if(a<b){c=a;a=b;b=c;}	//a>b
		while(a%b){
			c=a%b;
			if(c==0)break;
			a=b;b=c;
		}
		scanf("%d",&a);
		if(a<b){c=a;a=b;b=c;}	//a>b
		while(a%b){
			c=a%b;
			if(c==0)break;
			a=b;b=c;
		}
		printf("%d\n",b);
	}
	return 0;
}
