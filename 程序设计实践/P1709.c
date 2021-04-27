#include<stdio.h>
int main(){
	long long n;
	while(~scanf("%lld",&n)){
		n/=1000;
		int s,m,h;
		s=n%60;
		n/=60;
		m=n%60;
		n/=60;
		h=n%24;
		if(h<10)printf("0");
		printf("%d:",h);
		if(m<10)printf("0");
		printf("%d:",m);
		if(s<10)printf("0");
		printf("%d\n",s);
	}
	return 0;
}