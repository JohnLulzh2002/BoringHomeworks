#include<stdio.h>
int main(){
	int a;
	float x,y; 
	while(~scanf("%d%f%f",&a,&x,&y))
		printf("%f\n",x+a%3*(int)(x+y)%2/4);
	return 0;
}