#include<stdio.h>
int main(){
	int n,v;
	while(~scanf("%d%d",&v,&n)){
		int a[10002]={},i,max=0,mmax=0;
		while(n--){
			int t,w;
			scanf("%d%d",&t,&w);
			for(i=v-t;i>-1;i--)
				if(a[i]+w>a[i+t]){
					if((a[i+t]=a[i]+w)>mmax)
						mmax=a[i+t];
					if(i+t>max)max=i+t;
				}
		}
		printf("%d\n",mmax);
	}
	return 0;
}