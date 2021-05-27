#include<stdio.h>
#include<stdlib.h>
int cmp(void*a,void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n,t,i,a[50001];
	while(~scanf("%d%d",&n,&t)){
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		qsort(a,n,sizeof(int),cmp);
		for(i=0;i<n&&t>0;i++)
			t-=a[i];
		if(t<0)i--;
		printf("%d\n",i);
	}
	return 0;
}