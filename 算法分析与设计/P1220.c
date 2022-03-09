#include<stdio.h>
char a[9][9],filled[9]={};
int dfs(int n){
	if(n==8)	return 1;
	if(filled[n])return dfs(n+1);
	int i,j,ans=0,can;
	for(i=0;i<8;i++){
		can=1;
		for(j=0;j<8;j++){
			if(j!=i && a[n][j]){
				can=0;
				break;
			}
			if(j!=n && a[j][i]){
				can=0;
				break;
			}
		}
		for(j=1;n-j>-1&&i-j>-1;j++)
			if(a[n-j][i-j]){
				can=0;
				break;
			}
		for(j=1;n+j<8&&i-j>-1;j++)
			if(a[n+j][i-j]){
				can=0;
				break;
			}
		for(j=1;n-j>-1&&i+j<8;j++)
			if(a[n-j][i+j]){
				can=0;
				break;
			}
		for(j=1;n+j<8&&i+j<8;j++)
			if(a[n+j][i+j]){
				can=0;
				break;
			}
		if(can){
			a[n][i]=1;
			ans+=dfs(n+1);
			a[n][i]=0;
		}
	}
	return ans;
}
int main(){
	int i,j;
	for(i=0;i<8;i++)for(j=0;j<8;j++){
		scanf("%d",&a[i][j]);
		if(a[i][j])filled[i]=1;
	}
	printf("%d",dfs(0));
	return 0;
}