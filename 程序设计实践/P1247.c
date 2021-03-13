#include<stdio.h>
int main(){
	int a;
	while(~scanf("%d",&a)){
		if(a>9999&&a<100000)
			printf("22113\n");
		else
			printf("wrong\n");
	}
	return 0;
}