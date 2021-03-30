#include<stdio.h>
int main(){
	int m;
	const double rate=1+(0.0171/12);
	while(~scanf("%d",&m)){
		double ans=0;
		int i=48;
		while(i--){
			ans+=m;
			ans/=rate;
		}
		printf("%.2f\n",ans);
	}
	return 0;
}