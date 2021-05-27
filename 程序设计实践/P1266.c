#include<stdio.h>
int main(){
	int sum,a;
	char c;
	while(~scanf("%d",&sum)){
		scanf("%c",&c);
		while(c=='+'){
			scanf("%d",&a);
			sum+=a;
			scanf("%c",&c);
		}
		printf("%d\n",sum);
	}
	return 0;
}