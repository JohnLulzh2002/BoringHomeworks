#include<stdio.h>
int main(){
	int n,a,arr[1001]={},s=0;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		if(a<0){
			if(arr[-a]==1){
				s++;
				arr[-a]=2;
			}
			if(arr[-a]==0)
				arr[-a]=-1;
		}
		else{
			if(arr[a]==-1){
				s++;
				arr[a]=2;
			}
			if(arr[a]==0)
				arr[a]=1;
		}
	}
	printf("%d",s);
	return 0;
}
