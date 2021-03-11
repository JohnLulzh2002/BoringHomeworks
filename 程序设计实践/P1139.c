#include<stdio.h>
#include<math.h>
int main(){
	int a[505],l,n,i;
	while(~scanf("%d",&n)){
		l=1;
		a[0]=1;
		for(i=1;i<504;i++)
			a[i]=0;
		while(n--){
			for(i=0;i<l;i++)
				a[i]*=2;
			for(i=0;i<l;i++){
				a[i+1]+=a[i]/10;
				a[i]%=10;
			}
			for(;a[l]&&l<501;l++){
				a[l+1]+=a[l]/10;
				a[l]%=10;
			}
		}
		a[0]--;
		for(l=499;l+1;l--)
			printf("%d",a[l]);
		printf("\n");
	}
	return 0;
}