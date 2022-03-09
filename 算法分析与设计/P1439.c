#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int n,size[40],value[40];
int fun(int v,int i){
	if(i==n)
		return 0;
	int t=v-size[i];
	int ans=fun(v,i+1);
	if(t>=0)
		ans=MAX(fun(t,i+1)+value[i],ans);
	return ans;
}
int main(){
	int v,i;
	while(~scanf("%d%d",&v,&n)){
		for(i=0;i<n;i++)
			scanf("%d%d",&size[i],&value[i]);
		printf("%d\n",fun(v,0));
	}
	return 0;
}