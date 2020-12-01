#include <stdio.h>
void swap(int*a,int*b){
	*a+=*b;
	*b=*a-*b;
	*a-=*b;
}
int main(){
	int a[20],i,j,l=0;
	while(~scanf("%d",&a[l++]));
	for (i=0;i<l;i++)
		for(j=0;i+j<l-1;j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
	for(i=0;i<l;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}