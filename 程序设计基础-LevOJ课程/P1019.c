#include<stdio.h>
int main(){
	int i=0;
	char q,s[501];
	for(scanf("%s",s);s[i];i++){
		q=s[i];
		if(q<'A'||q>'Z')printf("%c",q);
		else printf("%c",q-'A'+'a');
	}
	return 0;
} 
