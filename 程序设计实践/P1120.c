#include<stdio.h>
#include<string.h>
int main(){
	char a[201],b[201];
	int la,lb,l,i,p,c[201];
	while(~scanf("%s%s",&a,&b)){
		la=strlen(a);lb=strlen(b);
		p=0;
		l=la>lb?la:lb;
		for(i=0;i<=l;i++){
			if(i<la)p+=a[la-i-1]-'0';
			if(i<lb)p+=b[lb-i-1]-'0';
			c[i]=p%10;
			p/=10;
		}
		for(i=l;c[i]==0&&i>0;i--);
		for(;i>=0;i--)printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}