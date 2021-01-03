#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,p;
	while(~scanf("%lf%lf%lf",&a,&b,&c)){
		if(a+b>c&&a+c>b&&b+c>a){
			p=(a+b+c)/2;
			p=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.2f\n",p);
		}
		else printf("-1\n");
	}
	return 0;
}