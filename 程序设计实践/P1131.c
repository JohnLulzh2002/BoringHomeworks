#include<stdio.h>
#include<string.h>
char s[101][101];
int find(char a[],int la,char b[]){
	int lb=strlen(b),i;
	for(i=0;i+la<=lb;i++){
		int flag=1,j;
		for(j=0;j<la;j++)
			if(a[j]!=b[i+j]){
				flag=0;
				break;
			}
		if(!flag){
			flag=1;
			for(j=0;j<la;j++)
				if(a[la-1-j]!=b[i+j]){
					flag=0;
					break;
				}
		}
		if(flag)return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,lshortest=101;
		char shortest[101];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",s[i]);
			int l=strlen(s[i]);
			if(l<lshortest){
				strcpy(shortest,s[i]);
				lshortest=l;
			}
		}
		for(i=lshortest;i;i--){
			int j;
			for(j=0;j+i<=lshortest;j++){
				int k,fine=1;
				for(k=0;k<n;k++){
					if(!find(&shortest[j],i,s[k])){
						fine=0;
						break;
					}
				}
				if(fine)goto finished;
			}
		}
		finished:
		printf("%d\n",i);
	}
	return 0;
}