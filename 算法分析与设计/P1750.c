#include<stdio.h>
int a[500002],t[500002],n;
long long f(int l,int r){
	if(l>=r)return 0;
	int m=(l+r)/2,i=l,j;
	long long s=f(l,m)+f(m+1,r);
	for(;i<=m;i++)
		t[i]=a[i];
	t[i]=2e9;
	for(j=l;l<=r;l++){
		if(i<=r&&t[j]>a[i]){
			a[l]=a[i++];
			s+=m-j+1;
		}
		else
			a[l]=t[j++];
	}
	return s;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	printf("%lld\n",f(0,n-1));
	return 0;
}