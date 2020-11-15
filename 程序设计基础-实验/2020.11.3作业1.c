#include<stdio.h>
void swap(int*a,int*b){
	*a+=*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)==3){
		if(a>b)swap(&a,&b);
		if(a>c)swap(&a,&c);
		if(b>c)swap(&b,&c);
		if(a+b<=c){
			printf("Not a triangle\n");
			continue;
		}
		if(a==b||b==c)
			if(a==b&&b==c)
				printf("Equilateral\n");
			else
				printf("Isosceles\n");
		else	printf("Not equilateral or isosceles\n");
	}
	
	return 0;
}
