#include<stdio.h>
int f(int m,int n){
	if(n<1||m<0)
		return 0;
	if(n<2||m<2)
		return 1;
	return f(m,n-1)+f(m-n,n);
}
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n))
		printf("%d\n",f(m,n));
	return 0;
}