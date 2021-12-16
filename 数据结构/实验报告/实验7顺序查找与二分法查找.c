#include<stdio.h>
#include<stdlib.h>
int main(){
int n,a[100],i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
	a[i]=rand()%100;
	printf("%d ",a[i]);
}
putchar('\n');
scanf("%d",&k);
a[0]=k;
for(i=n;a[i]!=k;i--);
printf("%d\n",i);
for(i=2;i<=n;i++){
	int t=a[i];
	for(j=i-1;j&&a[j]>t;j--)
		a[j+1]=a[j];
	a[j+1]=t;
}
for(i=1;i<=n;i++)
	printf("%d ",a[i]);
putchar('\n');
scanf("%d",&k);
int l=1,r=n,m;
while(l<=r){
	m=(l+r)/2;
	if(a[m]==k){
		printf("%d\n",m);
		break;
	}
	if(a[m]<k)
		l=m+1;
	else
		r=m-1;
}
if(a[m]!=k)
	printf("0\n");
return 0;
}