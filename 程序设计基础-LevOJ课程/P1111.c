#include<stdio.h>
int main(){
	int n,k,i,j,a[10001];
	while(scanf("%d%d",&n,&k)==2){
		for(i=0;i<n;i++)a[i]=1;
		for(i=2;i<=k;i++)
			for(j=i-1;j<n;j+=i)
				a[j]=1-a[j];
		for(i=0;i<n;i++)
			if(a[i])
				printf("%d\n",i+1);
	}
	return 0;
}
