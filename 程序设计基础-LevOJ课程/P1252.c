#include<stdio.h>
int main(){
	int n,i,j;
	while(~scanf("%d",&n))
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				if(i<j)
					printf("%d ",n-j);
				else
					printf("%d ",n-i);
			printf("\n");
		}
	return 0;
}