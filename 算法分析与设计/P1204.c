#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *((int*)a)-*((int*)b);}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,a[1001],s=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		for(i=0;i<n-1;i++)
			s+=a[i];
		float ans;
		if(s>a[i]){
			ans=s+a[i];
			ans/=2;
		}else
			ans=s;
		printf("%.1f\n",ans);
	}
}