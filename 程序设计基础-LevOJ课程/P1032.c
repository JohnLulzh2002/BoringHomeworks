#include<stdio.h>
int main(){
	int m,k,n,in,i,a,s;
	for(scanf("%d",&m);m;m--){
		scanf("%d%d",&k,&n);
		s=a=0;
		while(k--){
			scanf("%d",&in);
			if(in>n){
				s+=in;
				a++;
			}
		}
		if(a)	printf("%.2lf\n",(double)s/a);
		else	printf("-1\n");
	}
	return 0;
}