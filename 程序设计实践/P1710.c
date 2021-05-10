#include<stdio.h>
int main(){
	int n,min,max,a;
	while(~scanf("%d",&n)){
		max=0;min=2.1e9;
		while(n--){
			scanf("%d",&a);
			if(a>max)max=a;
			if(a<min)min=a;
		}
		printf("%d %d\n",max,min);
	}
	return 0;
}