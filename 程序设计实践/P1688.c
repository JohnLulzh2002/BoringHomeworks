#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d,e,min,max,i,j,k,l,m,n,cnt=0
			,la[11],lb[11],lc[11],ld[11],le[11];
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		for(i=0;i<a;i++)scanf("%d",&la[i]);
		for(i=0;i<b;i++)scanf("%d",&lb[i]);
		for(i=0;i<c;i++)scanf("%d",&lc[i]);
		for(i=0;i<d;i++)scanf("%d",&ld[i]);
		for(i=0;i<e;i++)scanf("%d",&le[i]);
		scanf("%d%d",&min,&max);
		ld[d]=0;le[e]=0;
		for(i=0;i<d;i++)for(j=i+1;j<=d;j++)
			for(k=0;k<e;k++)for(l=k+1;l<=e;l++){
				int s=ld[i]+ld[j]+le[k]+le[l];
				for(m=0;m<a;m++)for(n=0;n<b;n++){
					s+=la[m]+lb[n];
					if(s<=max&&s>=min)	cnt++;
					s-=la[m]+lb[n];
				}
				for(m=0;m<c;m++){
					s+=lc[m];
					if(s<=max&&s>=min)	cnt++;
					s-=lc[m];
				}
			}
		printf("%d\n",cnt);
	}
	return 0;
}