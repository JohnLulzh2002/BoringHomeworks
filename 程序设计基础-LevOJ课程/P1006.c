#include<stdio.h>
int main(){
	int n,a,b,c;
	for(scanf("%d",&n);n>0;n--){
		scanf("%d%d",&a,&b);
		if(a<b){c=a;a=b;b=c;}	//a>b
		c=a;
		while(a%b)a+=c;
		printf("%d\n",a);
	}
	return 0;
}
