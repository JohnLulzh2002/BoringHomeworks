#include<stdio.h>
void swap(int*a,int*b){
	*a+=*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int a,b,c,t;
	while(~scanf("%d%d%d",&a,&b,&c)){
		if(a>b)swap(&a,&b);
		if(a>c)swap(&a,&c);
		if(b>c)swap(&b,&c);
		if(a+b<=c){
			printf("not a triangle\n");
			continue;
		}
		t=0;
		if(a==b||b==c)
			if(a==b&&b==c)
				printf("regular triangle\n");
			else
				printf("isosceles triangle\n");
		else	t=1;
		if(a*a+b*b==c*c){
			printf("right triangle\n");
			t=0;
		}
		if(t)printf("triangle\n");
	}
	return 0;
}