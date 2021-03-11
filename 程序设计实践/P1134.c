#include <stdio.h>
int main(){
	int a[100000],l,i,j,n;
	while(~scanf("%d",&n)){
		a[1]=1;
		for(i=2;i<100000;i++)
			a[i]=0;
		l=2;
		for(i=1;i<=n;i++){
			for(j=1;j<l;j++)
				a[j]*=i;
			for(j=1;j<l;j++){
				a[j+1]+=a[j]/10;
				a[j]%=10;
			}
			for(;a[l];l++){
				a[l+1]+=a[l]/10;
				a[l]%=10;
			}
		}
		for(i=l-1;i;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}