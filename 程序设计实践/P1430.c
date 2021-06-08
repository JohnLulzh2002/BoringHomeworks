#include<stdio.h>
int main(){
	int n,m,a[20];
	while(~scanf("%d%d",&n,&m)){
		char dp[100]={1};
		int i,j,max=0;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
			for(j=max;j+1;j--)
				if(dp[j]){
					dp[j+a[i]]=1;
					if(j+a[i]>max)max=j+a[i];
				}
		}
		if(dp[m])	printf("yes\n");
		else		printf("no\n");
	}
	return 0;
}