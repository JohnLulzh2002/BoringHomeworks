#include<stdio.h>
int main(){
	int n,k,i;
	while(~scanf("%d%d",&n,&k)){
		char a[1002]={};
		k++;
		while(--k)
			for(i=k;i<=n;i+=k)
				a[i]=1-a[i];
		for(i=1;a[i];i++);
		printf("%d",i);
		for(i++;i<=n;i++)
			if(!a[i])
				printf(" %d",i);
		printf("\n");
	}
	return 0;
}