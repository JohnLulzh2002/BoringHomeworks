#include<stdio.h>
#include<string.h>
int main(){
	char a[201],b[201],t[201];
	int la,lb,c[201]={0},p=0,i;
	while(~scanf("%s %s",a,b)){
		la=strlen(a);lb=strlen(b);
		for(i=0;i<201;++i)
			c[i]=0;
		if(la<lb||(la==lb&&strcmp(a,b)<0)){
			printf("-");
			strcpy(t,a);
			strcpy(a,b);
			strcpy(b,t);
			la+=lb;
			lb=la-lb;
			la-=lb;
		}
		for(i=0;i<=la;i++){
			if(i<=lb) c[i]=a[la-i]-b[lb-i]-p;
			else c[i]=a[la-i]-'0'-p;
			if(c[i]<0){
				p=1;
				c[i]+=10;
			}
			else p=0;
		}
		for(i=la;c[i]==0;i--);
		if(i<1)printf("0");
		for(;i>0;i--)printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}