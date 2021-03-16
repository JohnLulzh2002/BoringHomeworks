#include<stdio.h>
int main(){
	int n,c;
	while(~scanf("%d%d",&n,&c)){
		int a[10002]={},i,max=0,mmax=0;
		while(n--){
			int v,w;
			scanf("%d%d",&v,&w);
			for(i=0;i+v<=c;i++)
				if(a[i]+w>a[i+v]){
					if((a[i+v]=a[i]+w)>mmax)
						mmax=a[i+v];
					if(i+v>max)max=i+v;
				}
		}
		printf("%d\n",mmax);
	}
	return 0;
}