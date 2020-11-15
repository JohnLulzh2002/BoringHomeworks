#include<stdio.h>
int main(){
	int n,a,b,i;
	scanf("%d",&n);
	for(;n;n--){
		scanf("%d%d",&a,&b);
		if(a>b)
			i=b;
		else
			i=a;
		for(;i>0;i--)
			if(a%i==0&&b%i==0){
				printf("%d\n",i);
				break;
			}
	}
	return 0;
}
