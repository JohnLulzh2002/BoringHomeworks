#include<stdio.h>
const int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n;
	while(~scanf("%d",&n)){
		int y=2007,m=10,d=10,max;
		while(n--){
			d++;
			max=month[m];
			if(y%4==0 && m==2)max=29;
			if(d>max){
				d=1;
				m++;
				if(m==13){
					m=1;
					y++;
				}
			}
		}
		printf("%d-",y);
		if(m<10)printf("0");
		printf("%d-",m);
		if(d<10)printf("0");
		printf("%d\n",d);
	}
	return 0;
}