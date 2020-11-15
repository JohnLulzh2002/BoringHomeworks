#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,t,p;
	char s[1001][102],ans[102];
	while(scanf("%d",&n)==1){
		scanf("%*c");
		for(i=0;i<n;i++){
			scanf("%[^\n]",s[i]);
			scanf("%*c");
		}
		for(;n;n--){
			for(i=0;i<102;i++)ans[i]=126;
			for(i=0;i<n;i++){
				for(j=0;s[i][j]&&ans[j];j++){
					if(s[i][j]<ans[j]){
						strcpy(ans,s[i]);
						p=i;
						break;
					}
					if(s[i][j]>ans[j])break;
				}
				if(s[i][j]==0){
					strcpy(ans,s[i]);
					p=i;
				}
			}
			printf("%s\n",ans);
			for(p++;p<n;p++)
				strcpy(s[p-1],s[p]);
		}
	}
	return 0;
}
