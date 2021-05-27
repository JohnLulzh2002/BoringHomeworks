#include<stdio.h>
int main(){
	char s[222];
	while(~scanf("%s",s)){
		int i,n=0,ans=0;
		for(i=0;s[i];i++){
			if(s[i]!='+')
				n=10*n+s[i]-'0';
			else{
				ans+=n;
				n=0;
			}
		}
		ans+=n;
		printf("%d\n",ans);
	}
	return 0;
}