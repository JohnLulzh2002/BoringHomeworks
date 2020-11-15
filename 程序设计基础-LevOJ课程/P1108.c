#include<stdio.h>
int main(){
	int i,s;
	char a[30];
	while(scanf("%s",a)==1){
		if(a[0]=='0'&&a[1]==0)
			break;
		s=0;
		for(i=0;a[i];i++){
			s*=2;
			s+=a[i]-'0';
		}
		printf("%X\n",s);
	}
	return 0;
}
