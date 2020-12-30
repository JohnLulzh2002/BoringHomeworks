#include<stdio.h>
int main(){
	int n,a,arr[1001]={},s=0;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		if(a<0)
			switch(arr[-a]){
				case 1:
					s++;
					arr[-a]=2;
					break;
				case 0:
					arr[-a]=-1;
			}
		else
			switch(arr[a]){
				case -1:
					s++;
					arr[a]=2;
					break;
				case 0:
					arr[a]=1;
			}
	}
	printf("%d",s);
	return 0;
}