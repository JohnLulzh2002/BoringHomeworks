#include<stdio.h>
int main(){
	int n,a,b,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(a>b)	i=b;
		else	i=a;
		for(;i>0;i--)
			if(!(a%i || b%i)){
				printf("%d\n",i);
				break;
			}
	}
	return 0;
}