#include<stdio.h>
int main(){
	int n,a,c=0,m=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		c+=a;
		if(c>m)m=c;
		if(c<0)c=0;
	}
	printf("%d",m);
	return 0;
}