#include<stdio.h>
int main(){
	int a[100]={};
	int t,i;
	for(i=0;i<2;i++){
		printf(i==0?"A(x):\n":"B(x):\n");
		printf("Input the number of terms:\t");
		scanf("%d",&t);
		while(t--){
			int x,y;
			printf("Input coefficient and index:\t");
			scanf("%d%d",&x,&y);
			a[y]+=x;
		}
	}
	int plus=0;
	if(a[0]){
		printf("%d",a[0]);
		plus=1;
	}
	for(i=1;i<100;i++){
		if(a[i]==0)continue;
		if(plus){
			if(a[i]<0){
				printf(' -');
				a[i]=-a[i];
			}else
			printf(" +");
		}
		else
			plus=1;
		if(a[i]>1)printf("%d",a[i]);
		printf("x");
		if(i>2)printf("^%d",i);
	}
	return 0;
}