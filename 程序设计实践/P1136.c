#include<stdio.h>
#include<string.h>
int main(){
	char sa[102],sb[102];
	int a[202],b[202],c[202];
	int la,lb,lc,i,j,k;
	while(~scanf("%s%s",sa,sb)){
		la=strlen(sa);
		lb=strlen(sb);
		for(i=0;i<la;i++)
			a[i]=sa[la-1-i]-'0';
		for(i=0;i<lb;i++)
			b[i]=sb[lb-1-i]-'0';
		for(i=0;i<202;i++)
			c[i]=0;
		lc=la+lb-1;
		for(i=0;i<la;i++){
			for(j=0;j<lb;j++){
				c[i+j]+=a[i]*b[j];
			}
			for(k=0;k<lc;k++){
				c[k+1]+=c[k]/10;
				c[k]%=10;
			}
			for(;c[lc];lc++){
				c[lc+1]+=c[lc]/10;
				c[lc]%=10;
			}
		}
		for(lc--;lc>=0;lc--)
			printf("%d",c[lc]);
		printf("\n");
	}
	return 0;
}