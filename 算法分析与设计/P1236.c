#include<stdio.h>
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		int a,s[1001]={},i;
		while(m--){
			scanf("%d",&a);
			s[0]+=a;
			for(i=1;i<n;i++){
				scanf("%d",&a);
				if(s[i-1]>s[i])
					s[i]=s[i-1]+a;
				else
					s[i]+=a;
			}
		}
		printf("%d\n",s[n-1]);
	}
	return 0;
}