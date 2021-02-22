#include<stdio.h>
int a[10002];
int main(){
	int len,m,l,r,i,s;
	while(~scanf("%d%d",&len,&m)){
		for(i=0;i<=len;i++)
			a[i]=1;
		while(m--){
			scanf("%d%d",&l,&r);
			for(;l<=r;l++)
				a[l]=0;
		}
		for(s=i=0;i<=len;i++)
			if(a[i])
				s++;
		printf("%d\n",s);
	}
	return 0;
}