#include<stdio.h>
int main(){
	int t,i,j,l,r,n,ans=0,a[1000];
	scanf("%d%d%d",&l,&r,&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=l;i<=r;i++){
		t=1;
		for(j=0;j<n;j++)
			if(a[j]*2<=i&&a[j]*10>=i||
				i*2<=a[j]&&i*10>=a[j]){
				t=0;
				break;
			}
		ans+=t;
	}
	printf("%d\n",ans);
	return 0;
}