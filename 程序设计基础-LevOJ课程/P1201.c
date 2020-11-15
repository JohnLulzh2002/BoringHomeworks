#include<stdio.h>
int main(){
	int n,m,a,k,t;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&m);
		t=1;
		for(a=1;a<m;a++)
			if(!(n%a||n%(m-a))){
				t=0;
				printf("%d\n",a);
				break;
			}
		if(t)printf("-1\n");
	}
	return 0;
}