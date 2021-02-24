#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		int n=0,an=0;
		double m=1,am;
		am=a;
		while(am>=10){
			am/=10;
			an++;
		}
		while(b){
			if(b&1){
				m*=am;
				n+=an;
			}
			while(m>=10){
				m/=10;
				n++;
			}
			am*=am;
			an*=2;
			while(am>=10){
				am/=10;
				an++;
			}
			b/=2;
		}
		printf("%.3f*10^%d\n",m,n);
	}
	return 0;
}