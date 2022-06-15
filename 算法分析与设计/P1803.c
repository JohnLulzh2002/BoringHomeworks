#include<stdio.h>
#include<string.h>
#define MAX 1000002
char t[MAX],s[MAX];
int nxt[MAX];
int main(){
	scanf("%s%s",t,s);
	int i=0,j=-1,ans=0;
	int lt=strlen(t),ls=strlen(s);
	nxt[0]=-1;
	while(i<ls){
		if(j==-1||s[i]==s[j])
			nxt[++i]=++j;
		else j=nxt[j];
	}

	i=0,j=0;
	while(i<lt){
		if(j==-1||t[i]==s[j])++i,++j;
		else j=nxt[j];
		if(j==ls){
			ans++;
			j=nxt[j];
		}
	}
	printf("%d\n",ans);
	return 0;
}