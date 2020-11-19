#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,n,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	n=-b/2/a;
	//if(b==0)n=1e-7;
	//上一行是处理a=1,b=0,c=1时的异常结果
	d=b*b-4*a*c;
	if(a==0)printf("a=0\n");
	printf("delta=%.2f\n",d);
	if(d==0)printf("x1=x2=%.5f",n);
	else if(d<0){
		d=sqrt(-d)/2/a;
		printf("x1=%.2f+%.2fi;x2=%.2f-%.2fi",n,d,n,d);
	}
	else{
		d=sqrt(d)/2/a;
		printf("x1=%.2f;x2=%.2f",n+d,n-d);
	}
	return 0;
}