#include<stdio.h>
int i,j,n,m,dp[1000][1000]={1};
int main(){
	scanf("%d%d",&n,&m);n--;m--;
	for(i=0;i<995;i++)for(j=0;j<995;j++){
		dp[i+1][j+2]+=dp[i][j];
		dp[i+2][j+1]+=dp[i][j];
	}
	printf("%d",dp[n][m]);
	return 0;
}