#include<stdio.h>
#include<string.h>
int main(){
	int p,r;
	char s[10];
	while(scanf("%d%d%s",&p,&r,s),p){
		int i,l=strlen(s),n=0;
		for(i=0;s[i];i++){
			n*=p;
			if(s[i]<'A')n+=s[i]-'0';
			else	n+=s[i]-'A'+10;
		}
		for(i=0;n;i++){
			int t=n%r;
			if(t>9)	s[i]=t+'A'-10;
			else	s[i]=t+'0';
			n/=r;
		}
		while(i--)printf("%c",s[i]);
		printf("\n");
	}
	return 0;
}