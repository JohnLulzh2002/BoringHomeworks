#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i;
		for(i=1;i<=n;i++){
			int j,count=0;
			for(j=1;j<=i;j++)
				if(i%j==0)count++;
			if(count%2)printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}