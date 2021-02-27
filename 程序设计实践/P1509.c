#include<stdio.h>
#include<string.h>
int divide2(char n[],int l){
	int i=0,rest=0;
	for(;i<l;i++){
		rest+=n[i]-'0';
		n[i]=rest/2+'0';
		rest=(rest%2)*10;
	}
	if(n[0]=='0'){
		for(i=0;i<l;i++)
			n[i]=n[i+1];
		l--;
	}
	return l;
}
int main(){
	/* (ab)%c=(a%c)(b%c) */
	char b[103];
	int a;
	while(~scanf("%d%s",&a,b)){
		int base=a%1337,lb=strlen(b);
		a=1;
		while(lb){
			if((b[lb-1]-'0')%2)
				a=(a*base)%1337;
			lb=divide2(b,lb);
			base=(base*base)%1337;
		}
		printf("%d\n",a);
	}
	return 0;
}