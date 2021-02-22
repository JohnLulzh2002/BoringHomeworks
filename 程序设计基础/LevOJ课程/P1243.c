#include<stdio.h>
#include<string.h>
int main(){
	struct nation{
		int num,pep;
		char name[50],cnt[30];
	} s[200],t;
	int n,i,j,k;
	//freopen("in.txt","r",stdin);
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++)
			scanf("%d %s %d %s",&s[i].num,s[i].name,&s[i].pep,s[i].cnt);
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(strcmp(s[i].name,s[j].name)>0){
					t=s[i];s[i]=s[j];s[j]=t;
				}
		for(i=0;i<n;i++)
			if(strcmp(s[i].name,"China"))
				printf("%d %s %d %s\n",s[i].num,s[i].name,s[i].pep,s[i].cnt);
			else t=s[i];
		printf("%d %s %d %s\n",t.num,t.name,t.pep,t.cnt);
	}
	return 0;
}