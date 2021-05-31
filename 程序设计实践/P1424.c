#include<stdio.h>
#define MAX 200000000
int a[333];
int main(){
	int n,m,i,c=0,ans;
	for(i=1;i<MAX;i++){
		n=i;
		while(!(n%2))n/=2;
		while(!(n%3))n/=3;
		if(n==1)a[++c]=i;
	}
	while(~scanf("%d%d",&n,&m)){
		for(i=1;a[i]<=n;i++)
			if(i==m)ans=a[i];
		printf("%d\n%d\n",i-1,ans);
	}
	return 0;
}