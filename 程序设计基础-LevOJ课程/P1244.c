#include<stdio.h>
int main(){
	int n,a[100],l,i,j,t;
	while(~scanf("%d",&n)){
		l=0;a[0]=1;
		for(i=0;i<n;i++){
			t=0;
			for(j=0;j<=l;j++){
				t+=a[j]*2;
				a[j]=t%10;
				t/=10;
			}
			if(t){
				l++;
				a[l]=1;
			}
		}
		for(a[0]--;l+1;l--)
			printf("%d",a[l]);
		printf("\n");
	}
	return 0;
}