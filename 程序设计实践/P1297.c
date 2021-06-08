#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int a,p;
}Pig;
int cmp(const void*pn,const void*pm){
	Pig m=*(Pig*)pm,n=*(Pig*)pn;
	if(m.p==n.p)return m.a-n.a;
	return m.p-n.p;
}
int main(){
	int n,k;
	while(~scanf("%d%d",&n,&k)){
		Pig pigs[1001];
		int i,j,ans=0,dp[1001]={};
		for(i=0;i<n;i++)
			scanf("%d",&pigs[i].a);
		for(i=0;i<n;i++)
			scanf("%d",&pigs[i].p);
		qsort(pigs,n,sizeof(Pig),cmp);
		for(i=0;i<n;i++)
			for(j=k;j>0;j--){
				int v=pigs[i].a-pigs[i].p*(j-1);
				if(v<0)v=0;
				if(dp[j-1]+v>dp[j])
					dp[j]=dp[j-1]+v;
				if(dp[j]>ans)
					ans=dp[j];
			}
		printf("%d\n",ans);
	}
	return 0;
}